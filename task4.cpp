#include<iostream>
using namespace std;
void add(int number1,int number2,char op);
void multiply(int number1,int number2,char op);
void subtract(int number1,int number2,char op);
void divide(int number1,int number2,char op);
int main()
{
	int number1;
	int number2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>number1;
	cout<<"Enter 2nd number: ";
	cin>>number2;
	cout<<"Enter an operator (+ , -, *, /): ";
	cin>>op;
	add(number1,number2,op);
	multiply(number1,number2,op);
	subtract(number1,number2,op);
	divide(number1,number2,op);

}

	void add(int number1,int number2,char op)
{	
	int result;	
	if (op == '+')
	{result=number1+number2;
	cout<< "Addition: ";
	cout<< result;
}}
	void multiply(int number1,int number2,char op)
{
	int result;
	if (op == '*')
	{result=number1*number2;
	cout<<"Multiplication: ";
	cout<<result;
}
}
	void subtract(int number1,int number2,char op)
{
	int result;
	if (op == '-')
	{result=number1-number2;
	cout<<"Subtraction: ";
	cout<<result;
}
}
	void divide(int number1,int number2,char op)
{
	int result;
	if (op == '/')
	{result=number1/number2;
	cout<<"Division: ";
	cout<<result;
}
}
	
	