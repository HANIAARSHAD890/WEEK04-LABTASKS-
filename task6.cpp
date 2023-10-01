#include<iostream>
using namespace std;
void marks(int scores);
int main()

{	
	int score;
	cout<<"Enter your score: ";
	cin>>score;
	marks(score);
	
}
void marks(int scores) 
{

	if (scores>50) {
	cout<<"Pass";}
	if(scores<50) {
	cout<<"Fail" ;}
	if (scores==50){
	cout<<"Fail";}
}
	
	