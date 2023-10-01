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
	float result1;
	float result2;	
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>purchaseamount;
	result1=purchaseamount-(10.0/100.0)*purchaseamount;
	result2=purchaseamount-(5.0/100.0)*purchaseamount;			
	if(day=="Sunday")
	{cout<<"Payable Amount: $";
	cout<<result1;}
	else
	{
	cout<<"Payable Amount: $";
	cout<<result2;}
}	