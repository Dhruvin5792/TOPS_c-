#include<iostream>
using namespace std;

main()
{
	int n;
	cout << "Please enter your number :";
	cin >> n;
	
	int i,sum=0;
	int arry[n];
	
	for(i=0;i<3;i++)
	{
		cin >> arry[i];
		sum += arry[i];
		
	}
	
	float average = (float)sum / n;
	
	cout << "\nSum = " << sum  << " Average = " << average ;
     
}
