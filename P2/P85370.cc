#include <iostream>
using namespace std;

int main() {
	double e,i;
	int t;
	string type_interest;
	cin >> e >> i >> t >> type_interest;

    cout.setf(ios::fixed);
    cout.precision(4);

	if (type_interest == "compound") {
		for (int j = 0; j < t; j++) 
            e += e * (i / 100);
		cout << e << endl;
    }
	else
        cout << e + e * ((i / 100) * t) << endl;
}