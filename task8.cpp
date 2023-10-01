#include<iostream>
using namespace std;
void calculatePayableAmount( string day,float purchaseamount);
main()
{
	string day;
	float purchaseamount;
calculatePayableAmount(day,purchaseamount);
}
void calculatePayableAmount(string day,float purchaseamount)
{
	float result;	
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>purchaseamount;
	result=	purchaseamount-(10.0/100.0)*purchaseamount;			
	if(day=="Sunday")
	{cout<<"Payable Amount: $";
	cout<<result;}
	else
	{cout<<"Payable Amount: $";
	cout<<purchaseamount;}
}	