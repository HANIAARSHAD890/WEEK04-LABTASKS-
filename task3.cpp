#include<iostream>
using namespace std;
void howmanystickers(float n);
 main()
{
	float n;
	cout<<"Enter the side length of the Rubik's cube: ";
	cin>>n;
	howmanystickers(n);
}
void howmanystickers(float n)	
{	float result;
	result=n*(n*6);
	cout<<"Number of stickers needed: ";
	cout<<result;
}