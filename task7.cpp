#include<iostream>
using namespace std;
void evenOrOdd(int integer);
int main()

{	
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	evenOrOdd(number);
	
}
void evenOrOdd(int integer) 
{	
	cout<<"Number ";
	cout<<integer;
	cout<<" is ";
	if (integer%2==0)
	{cout<<"even";}
	else
	{cout<<"odd";}
	
}
	
	