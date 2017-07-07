//practics convert2
#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	cout << "Please enter a Celsius value : ";
	double temperature;
	cin >> temperature;

	double convert(double);
	double convertResult = convert(temperature);
	cout << temperature << " degrees Celsius is " << convertResult << " degrees Fahrenheit\n" ;
	return 0;
}

double convert(double temperature)
{
	return 1.8 * temperature + 32;
}