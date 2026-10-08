#include<iostream>
using namespace std;
class Rectangle
{
private:
float l,b;
public:
void accept()
{
cout<<"Enter l:";
cin>>l;
cout<<"Enter b:";
cin>>b;
}
float area();
float perimeter();
void display()
{
cout<<"Area of rectangle is:"<<area();
cout<<"Perimeter of rectangle is:"<<perimeter();
}
};
float Rectangle::area()
{
return l*b;
}
float Rectangle::perimeter()
{
return 2*(l+b);
}
int main()
{
Rectangle r;
r.accept();
r.display();
return 0;
}


