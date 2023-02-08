#include <iostream>
#include <vector>
using namespace std;

struct Submission {
    string idn;
    string exer;
    int time;
    string res;
};

struct Student {
    string idn;
    vector<string> exercises;
    int green_subm;
    int green_exer;
    int red_exer;
    int tried_exer;
    int time_last_subm;
};

struct Max {
    string idn;
    int val;
};

typedef vector<Submission> History;

History read_history(int n) {
    History h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i].idn >> h[i].exer >> h[i].time >> h[i].res;
    }
    return h;
}

bool student_in(string student, const vector<Student>& students, int total_students) {
    for (int i = 0; i < total_students; ++i) {
        if (student == students[i].idn) return true;
    }
    return false;
}

bool exercise_in(string exercise, const vector<string>& exercises, int total_exercises) {
    for (int i = 0; i < total_exercises; ++i) {
        if (exercise == exercises[i]) return true;
    }
    return false;
}

void update_max(Max& max, int x, string idn) {

    if (x > max.val) {
        max.val = x;
        max.idn = idn;
    }
    if (x == max.val and idn < max.idn) max.idn = idn;
}

void print_max(const Max& max) {
    if (max.val == 0) cout << "-";
    else cout << max.idn << " (" << max.val << ")";
    cout << endl;
}

void reset_student_data(Student& Student) {
    vector<string> s(50);
    Student.exercises = s;
    Student.green_subm = 0;
    Student.green_exer = 0;
    Student.red_exer = 0;
    Student.tried_exer = 0;
    Student.time_last_subm = 0;
}

vector<Student> get_students_data(const History& history, int& total_students) {
    int m = history.size();
    vector<Student> students(20);
    total_students = 0;
    for (int i = 0; i < m; ++i) {

        Submission subm = history[i];
        if (not student_in(subm.idn, students, total_students)) {
            Student student;
            ++total_students;

            student.idn = subm.idn;
            reset_student_data(student);// total_sutdent - 1 = index of student

            for (int j = i; j < m; ++j) {
                subm = history[j];

                if (subm.idn == student.idn) {
                    if (subm.res == "green") ++student.green_subm;
                    if (subm.time > student.time_last_subm) student.time_last_subm = subm.time;

                    if (not exercise_in(subm.exer, student.exercises, student.tried_exer)) {
                        student.exercises[student.tried_exer] = subm.exer;
                        ++student.tried_exer;

                        if (subm.res == "green") ++student.green_exer;
                        else if (subm.res == "red") ++student.red_exer;
                    }
                }
            }
            students[total_students - 1] = student;
        }
    }
    return students;
}

void print_students_data(const vector<Student>& students, int total_students) {
    Max green_subm, green_exer, red_exer, tried_exer, time_last_subm;
    green_subm.val = green_exer.val = red_exer.val = tried_exer.val = time_last_subm.val = 0;
    green_subm.idn = green_exer.idn = red_exer.idn = tried_exer.idn = time_last_subm.idn = students[0].idn;

    for (int i = 0; i < total_students; ++i) {
        Student student = students[i];
        string idn = student.idn;

        update_max(green_subm, student.green_subm, idn);
        update_max(green_exer, student.green_exer, idn);
        update_max(red_exer, student.red_exer, idn);
        update_max(tried_exer, student.tried_exer, idn);
        update_max(time_last_subm, student.time_last_subm, idn);
    }

    cout << "student with more green submissions:       ";
    print_max(green_subm);
    cout << "student with more green exercises:         ";
    print_max(green_exer);
    cout << "student with more red exercises:           ";
    print_max(red_exer);
    cout << "student with more tried exercises:         ";
    print_max(tried_exer);
    cout << "student who has done the last submission:  ";
    if (total_students == 0) cout << "-" << endl;
    else cout << time_last_subm.idn << endl;
}

int main() {
    int n; 
    cin >> n;
    History history = read_history(n);

    int total_students;
    vector<Student> students = get_students_data(history, total_students);
    
    print_students_data(students, total_students);
}