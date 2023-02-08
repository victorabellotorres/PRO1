/*
    Write a program that reads sequences of names and, for each sequence, outputs its
    names without repetitions. Names should be printed following the order in which
    they appear in the sequence.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<string> read_vector(int num) {
    vector<string> v(num);

    for (int i = 0; i < num; ++i) {
        cin >> v[i];
    }

    return v;
}

void print_vector(vector<string> v) {
    int m = v.size();
    for (int i = 0; i < m; ++i) cout << v[i] << endl;
}

bool exist_name(string name,const vector<string>& names) {
    int m = names.size();
    for (int i = 0; i < m; ++i) {
        if (name == names[i]) return true;
    }

    return false;
}


void filter_repeated_names(const vector<string>& all_names, vector<string>& names) {
    int m = all_names.size();

    for (int i = 0; i < m; ++i) {
        if(not exist_name(all_names[i], names)) names.push_back(all_names[i]);
    }
}

int main() {
    int num;
    while (cin >> num) {
        vector<string> all_names = read_vector(num);

        vector<string> names;

        filter_repeated_names(all_names, names);

        print_vector(names);
        cout << endl;
    }
}