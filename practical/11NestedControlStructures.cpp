#include<iostream>
using namespace std;

main()
{
	int i,j,n;
	
	cout << "Please enter your number: ";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
}
