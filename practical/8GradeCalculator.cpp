#include<iostream>
using namespace std;

main()
{
	int marks;
	cout << "Please enter your mraks: ";
	cin >> marks;
	
	if(marks >= 90 && marks <= 100)
	{
		cout << "Grade: A+";
	}
	else if(marks > 80 && marks < 90)
	{
		cout << "Grade: A";
	}
	else if(marks > 70 && marks < 80)
	{
		cout << "Grade: B";
		
	}
	else if (marks > 60 && marks < 70)
	{
		cout << "Grade: C";
	}
	else if(marks > 50 && marks < 60)
	{
		cout << "Grade: D";
	}
	else if (marks > 30 && marks < 40)
	{
		cout << "Grade: F (Fail)";
	}
	
	else
	{
		cout << "Invalid choice is";
	}
}
