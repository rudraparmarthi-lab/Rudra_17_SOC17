#include <iostream>
using namespace std;

class Product
{
	public :
	int productId;
	string product_name;
	float price;
	int monthlySales[12];

void getData()
{
	cout<<"Enter product Id : ";
	cin>>productId;
	cout<<"Enter product name : ";
	cin>>product_name;
	cout<<"Enter the price of the product : ";
	cin>>price;
	cout<<"Enter sales for 12 months : \n";
	for(int i=0; i < 12; i++)
	{
		cout <<"Month "<<i+1<<" : ";
		cin >>monthlySales[i];
	}
}
int TotalQty()
{
	int total = 0;
	for(int i=0; i<12; i++)
	{
		total = total+monthlySales[i];
	}
	return total;
}

float TotalBill()
{
	return TotalQty()*price;
}

void Display()
{
	cout<<"\nProduct Id : "<<productId;
	cout<<"\nProduct Name : "<<product_name;
	cout<<"\nPrice of product : "<<price;
	cout<<"\nTotal Qty : "<<TotalQty();
	cout<<"\nTotal Bill : "<<TotalBill()<<endl;
}
};


int main()
{
	Product p;
	p.getData();
	p.Display();
return 0;
}