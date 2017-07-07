//ourfunc.cpp -- defining your own function
#include <iostream>

 void simon(int);	//function prototype for simon()

int main()
{
	using namespace std;
	simon(3);
	cout<< "Picker an Integer : ";
	int count;
	cin >> count;
	simon(count);
	cout << "Call again! \n Done!!";
	cin.get();
	return 0 ;
}

void simon(int c)
{
	using std::cout;
	cout << "Simon says touch your toes " << c << " times.\n";
}