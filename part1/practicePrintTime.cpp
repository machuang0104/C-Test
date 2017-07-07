//practice print time
#include <iostream>

using namespace std;
int main()
{
	cout << "Enter the value of hours : ";
	int hour;
	cin >> hour;
	cout << "Enter the value of minutes : ";
	int minutes;
	cin >> minutes;

	void showTime(int,int);
	showTime(hour,minutes);
	return 0;
}

void showTime(int hours,int minutes)
{
	cout << "Time : " << hours << ":" << minutes <<endl;
}