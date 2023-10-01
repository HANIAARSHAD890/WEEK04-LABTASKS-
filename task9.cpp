#include<iostream>
using namespace std;
void calculateFuel(float distance);
main()
{
	float distance;
calculateFuel(distance);
}
void calculateFuel(float distance)
{
	float result;	
	cout<<"Enter the distance: ";
	cin>>distance;
	result=	10*distance;
	cout<<"Fuel needed: ";			
	if(result<100)
	{cout<<100;}
	else
	{cout<<result;}
	
}	