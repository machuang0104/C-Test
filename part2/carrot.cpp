// carrot.cpp -- food processing program
//uses and displays a variable
#include <iostream>
int main()
{
	using namespace std;
	int carrots;
	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots.\n";
	// cout << endl;
	// carrots = carrots - 1;
	carrots--;
	cout << "Crunch ,crunch. Now I have " << carrots << " carrots.\n";;
	return 0;
}