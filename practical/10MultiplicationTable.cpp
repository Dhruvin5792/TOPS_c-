#include<iostream>
using namespace std;
main()
{
	int number,i;
	cout << "please enter your number is: ";
	cin >> number;
	
	for(i=0;i<=10;i++)
	{
		cout <<"\n" << number << " X " << i  << " = " << number*i;
	}
}
