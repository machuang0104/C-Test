//practice3
#include<iostream>

int main()
{
	using namespace std;
	cout << "Enter the number of light years :¡¡";
	float lightYears;
	cin >> lightYears;

	float convertUnits(float);
	float convertResult = convertUnits(lightYears);
	cout << lightYears << " light years = " << convertResult << " astronomical units";
	return 0;
}

float convertUnits(float lightYears)
{
	return lightYears * 63240;
}