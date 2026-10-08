#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
int empid;
string name;
float basicsalary;
float bonus;
float totalsalary;

public:
Employee()
{
empid=0;
name="unknown";
basicsalary=0;
bonus=0;
totalsalary=0;
cout<<"The default constructor is called";
}
Employee(int id,string n,float s,float b)
{
empid=id;
name=n;
basicsalary=s;
bonus=b;
calculateTotalSalary();
cout<<"The parameterized constructor is called";
}
void calculateTotalSalary()
{
totalsalary=basicsalary+bonus;
}
void display()
{
cout<<"The employee id is:"<<empid;
cout<<"The name is:"<<name;
cout<<"The basicsalary is:"<<basicsalary;
cout<<"The bonus is:"<<bonus;
cout<<"The total salary is:"<<totalsalary;
}
};
int main()
{
Employee e1;
e1.display();
Employee e2(173,"Rohit",50000,5000);
e2.display();
return 0;
}

