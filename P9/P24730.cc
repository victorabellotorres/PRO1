#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

struct Teacher {
    string name;
    int sweets;
    int carrots;
};

vector<Teacher> read_teachers(int n) {
    vector<Teacher> teachers(n);

    for (int i = 0; i < n; ++i) {
        cin >> teachers[i].name >> teachers[i].sweets >> teachers[i].carrots;
    }
    return teachers;
}

void print_teachers(vector<Teacher>& teachers) {
    int n = teachers.size();

    for (int i = 0; i < n; ++i) {
        cout << teachers[i].name << endl;
    }
}

bool cmp(Teacher t1, Teacher t2) {
    if(t1.sweets != t2.sweets){
		return t1.sweets > t2.sweets;
	}
	if(t1.carrots != t2.carrots){
		return t1.carrots > t2.carrots;
	}
	if(t1.name.size() != t2.name.size()){
		return t1.name.size() < t2.name.size();
	}
	return t1.name < t2.name;	
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;

        vector<Teacher> teachers = read_teachers(t);

        sort(teachers.begin(), teachers.end(), cmp);

        print_teachers(teachers);
        cout << endl;
    }
}