#include <iostream>
#include <vector>
using namespace std;

struct Coord {
    int x,y;
};

typedef vector<vector<char>> Matrix;

Matrix read_matrix(int n) {
    Matrix M(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> M[i][j];
    }

    return M;
}

Coord nextD (const Coord& p, int n) {
    Coord new_p;
    if (p.x == n - 1) {
        new_p.x = (p.y + 1)%n;
        new_p.y = ((n - 1) + (p.y + 1)/n)%n;
    }
    else if (p.y == 0) {
        new_p.x = 0;
        new_p.y = p.x + 1;
    }
    else {
        new_p.x = p.x + 1;
        new_p.y = p.y - 1;
    }
    return new_p;
}

void print_hidden_message(const Matrix& M, int n, int jumps, int length, Coord& point) {
    	vector<char> message(length);
		int s = 0;
		message[s] = M[point.y][point.x];
		++s;
		--length;
		while(length > 0){
			//cerr << "posicio actual = " << point.x << "  " << point.y << endl;
			for(int i = 0; i < jumps + 1; ++i){
				point = nextD(point, n);
			}
			//cerr << "posicio actual = " << point.x << "  " << point.y << endl;
			message[s] = M[point.y][point.x];
			++s;
			--length;
		}
		for(int i = 0; i < s - 1; ++i){
			if(message[i] == 'X' and message[i + 1] == 'X' ){
				cout << " ";
				++i;
			}
			else cout << message[i];
		}
		cout << message[s-1];
		cout << endl;
}

int main() {
    int n, jumps, length;
    Coord point;

    while (cin >> n >> jumps >> length >> point.y >> point.x) {

        Matrix M = read_matrix(n);
        print_hidden_message(M, n, jumps, length, point);
    }
}