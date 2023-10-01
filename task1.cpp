#include<iostream>
using namespace std;
void calculatefuel(float distance);
 main()
{
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	calculatefuel(float distance);
}
void fuels(float distance)	
{	float result;
	result=distance*10;
	cout<<"Fuel needed: ";
	cout<<result;
}
	
	



	

