#include <iostream>
using namespace std;

struct Rectangle {
    int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r) {
    cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2) {
    if (r1.x_left == r2.x_left and r1.x_right == r2.x_right and r1.y_down == r2.y_down and r1.y_up == r2.y_up) return 4;
    else if (r1.x_left <= r2.x_left and r1.x_right >= r2.x_right and r1.y_down <= r2.y_down and r1.y_up >= r2.y_up) return 2;
    else if (r1.x_left >= r2.x_left and r1.x_right <= r2.x_right and r1.y_down >= r2.y_down and r1.y_up <= r2.y_up) return 1;
    else if (r1.y_down >= r2.y_up or r2.y_down >= r1.y_up or r1.x_left >= r2.x_right or r2.x_left >= r1.x_right) return 0;
    return 3;
}

Rectangle interseccion(const Rectangle& r1, const Rectangle& r2, bool& empty){
    Rectangle inter;

    int relation = relationship(r1, r2);
    if (relation == 0) empty = true;
    else if (relation == 1 or relation == 4) inter = r1;
    else if (relation == 2) inter = r2;
    else if (relation == 3)  {
        inter = r1;
        if (r2.x_left > r1.x_left) inter.x_left = r2.x_left;
        if (r2.y_down > r1.y_down) inter.y_down = r2.y_down;
        if (r2.x_right < r1.x_right) inter.x_right = r2.x_right;
        if (r2.y_up < r1.y_up) inter.y_up = r2.y_up;
    }

    return inter;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        Rectangle r1;
        read(r1);

        bool empty = false;
        --n;
        while (not empty and n > 0) {
            Rectangle r2;
            read(r2);

            r1 = interseccion(r1, r2,  empty);
            --n;
        }
        if (empty) {
            cout << "empty intersection" << endl;
            while (n != 0) {
                read(r1);
                --n;
            }
        }
        else {
            cout << "bottom left point = (" << r1.x_left << ", " << r1.y_down << "); ";
            cout << "top right point = (" << r1.x_right << ", " << r1.y_up << ")" << endl;
        }

        cin >> n;
    }
}