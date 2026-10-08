#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll_no;
    string student_name;
    float marks;

public:
    void getdata()
    {
        cout << "Enter name: " << endl;
        cin.ignore();
        getline(cin, student_name);

        cout << "Enter roll number: " << endl;
        cin >> roll_no;

        cout << "Enter the marks scored: " << endl;
        cin >> marks;
    }

    void calculateresult()
    {
        if (marks >= 40)
        {
            cout << "You are passed" << endl;
        }
        else
        {
            cout << "You are fail" << endl;
        }
    }

    void display()
    {
        cout << "The name of the student is: " << student_name << endl;
        cout << "The roll number of the student is: " << roll_no << endl;
        cout << "The marks of the student is: " << marks << endl;

        calculateresult();
    }
};

int main()
{
    Student s;
    s.getdata();
    s.display();

    return 0;
}

