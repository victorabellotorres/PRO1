/*
    The product of x by y is stable if the digits of x and y on one hand,
    and the digits of x * y on the other hand, are the same ones.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// precondition:
void change_base(int num, string& s, int base) {
    if (num < base) {

        if (num >= 10) s.push_back(char((num%10 + 'A')));
        else s.push_back(char(num + '0'));
    }
    else {
        change_base(num/base, s, base);

        if (num%base >= 10) s.push_back(char((num%base)%10 + 'A'));
        else s.push_back(char(num%base + '0'));
    }
    
}

void count_symbols(vector<int>& v, const string& s) {
    int m = s.size();

    for (int i = 0; i < m; ++i) {
        if ((s[i] >= 'A')) ++v[s[i] - 'A' + 10];
        else ++v[s[i] - '0'];
    }
}

bool stable_products(string x, string y, string product, int base) {
    vector<int> range_of_numbers_xy(base, 0);
    vector<int> range_of_numbers_product(base, 0);

    count_symbols(range_of_numbers_xy, x);
    count_symbols(range_of_numbers_xy, y);    
    count_symbols(range_of_numbers_product, product);   

    return range_of_numbers_xy == range_of_numbers_product; 
}

int main() {
    int x, y, product;

    while(cin >> x and cin >> y) {

        cout << "solutions for " << x << " and " << y << endl;
        product = x*y;

        bool found = false;
        for (int i = 2; i <= 16; ++i) {
            string x_str;
            change_base(x, x_str, i);

            string y_str;
            change_base(y, y_str, i);

            string product_str;
            change_base(product, product_str, i);


            if (stable_products(x_str, y_str, product_str, i)) {
                found = true;
                cout << x_str << " * " << y_str << " = " << product_str;
                cout << " (base " << i << ")" << endl;
            }
        }
        if (not found) cout << "none of them" << endl;
        cout << endl;
    }
}