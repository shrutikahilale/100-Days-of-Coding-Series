#include <iostream>
using namespace std;

// C++ Program to Store Information of a Student in a Structure. This program stores the information (name, roll and marks entered by the user) of a student in a structure and displays it on the screen.

struct Student {
    string fname, lname;
    int roll;
    int marks[3];

    Student(string fn, string ln, int r, int m1, int m2, int m3) {
        this->fname = fn;
        this->lname = ln;
        this->roll = r;
        this->marks[0] = m1;
        this->marks[1] = m2;
        this->marks[2] = m3;
    }
};

int main()
{
    struct Student st = Student("Shrutika", "Hilale", 321026, 18, 16, 20);

    cout<<"Name: "<<st.fname<< " "<<st.lname<<"\n";
    cout<<"Roll: "<<st.roll<<"\n";
    cout<<"Marks in Data structures and algorithms: "<<st.marks[0]<<"\n";
    cout<<"Marks in Operating systems: "<<st.marks[1]<<"\n";
    cout<<"Marks in Computer networks: "<<st.marks[2]<<"\n";

    return 0;
}