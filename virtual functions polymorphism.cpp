#include<iostream>
#include<string>
#include<cmath>
using namespace std ;

class Shape {
protected :
string color ;

public :
Shape ( string c = " Unknown ") : color ( c ) {}

virtual void draw () const {
cout << " Drawing a generic shape ... " << endl ;
}

virtual float area () const { return 0; }
virtual float perimeter () const { return 0; }

virtual void displayInfo () const {
cout << " Color : " << color << endl ;
cout << " Area : " << area () << endl ;
cout << " Perimeter : " << perimeter () << endl ;
}

virtual ~ Shape () {}
};

class Circle : public Shape {
private :
float radius ;
public :
Circle ( string c , float r ) : Shape ( c ) , radius ( r ) {}

void draw () const override {
cout << " Drawing a circle of radius " << radius << endl ;
}

float area () const override {
return 3.14159 * radius * radius ;
}

float perimeter () const override {
return 2 * 3.14159 * radius ;
}

void displayInfo () const override {
cout << " --- Circle Details ---" << endl ;
Shape :: displayInfo () ;
cout << " Radius : " << radius << endl ;
}
};
class Square : public Shape {
private :
float side ;

public :
Square ( string c , float s ) : Shape ( c ) , side ( s ) {}

void draw () const override {
cout << " Drawing a square of side " << side << endl ;
}

float area () const override {
return side * side ;
}

 float perimeter () const override {
 return 4 * side ;
 }

 void displayInfo () const override {
 cout << " --- Square Details ---" << endl ;
 Shape :: displayInfo () ;
 cout << " Side : " << side << endl ;
 }
 };

 void processShape ( const Shape * shape ) {
 cout << "\ nProcessing Shape :" << endl ;
 shape -> draw () ;
 shape -> displayInfo () ;
 }

 int main () {
 Circle circle ("Red ", 5) ;
 Square square (" Blue ", 4) ;
 Shape * shape1 = & circle ;
Shape * shape2 = & square ;

 processShape ( shape1 ) ;
 processShape ( shape2 ) ;

 Shape * shapes [2];
 shapes [0] = new Circle (" Yellow ", 3) ;
 shapes [1] = new Square (" Purple ", 5) ;

 for (int i = 0; i < 2; i ++) {
 shapes [ i ] -> displayInfo () ;
 delete shapes [ i ];}
 return 0;}
