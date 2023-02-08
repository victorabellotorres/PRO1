#include <typeinfo>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;// The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    int size = stu.size();

    min = -1;
    max = -1;
    avg = 0;
    double count = 0;
    for (int i = 0; i < size; ++i) {
        if (stu[i].mark >= 0 and not stu[i].repeater) {
            if (min < 0) min = stu[i].mark;

            if (stu[i].mark > max) max = stu[i].mark;
            else if(stu[i].mark < min) min = stu[i].mark;

            avg += stu[i].mark;
            ++count;
        }
    }
    if (count == 0) avg = -1;
    else avg /= count;
}

int main() {

    {   // vigilar el tipus Estudiant

        struct Estudiant_cntrl {
            int dni;
            string nom;
            double nota;
            bool repetidor;
        };

        Student ru;
        Estudiant_cntrl rc;

        // diagnostics en temps de compilacio  
        ru.idn = rc.dni;  
        ru.name = rc.nom;  
        ru.mark = rc.nota;  
        rc.repetidor = ru.repeater;  

        // diagnostics en temps d'execucio
        if (sizeof(ru)!=sizeof(rc))     throw string("It seems that 'Student' is not well defined");
        if (typeid(ru.idn)!=typeid(rc.dni)) throw string("It seems that 'Student.idn' is not well defined");
        if (typeid(ru.name)!=typeid(rc.nom)) throw string("It seems that 'Student.name' is not well defined");
        if (typeid(ru.mark)!=typeid(rc.nota)) throw string("It seems that 'Student.mark' is not well defined");
        if (typeid(ru.repeater)!=typeid(rc.repetidor)) throw string("It seems that 'Student.repeater' is not well defined");
    }


    cout.setf(ios::fixed);
    cout.precision(4); 

    int n;
    while (cin >> n) {
        vector<Student> es(n);
        for (int i=0; i<n; ++i) {
            cin >> es[i].mark >> es[i].repeater;
        }
        double min, max, avg;
        information(es, min, max, avg);
        cout << min << " " << max << " " << avg << endl;
    }
}