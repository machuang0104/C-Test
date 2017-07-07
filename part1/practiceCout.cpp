//practice2
#include <iostream>

int main()
{
	using namespace std;
	cout << "Start\n";
	void out1();
	void out2();
	out1();
	out1();
	out2();
	out2();
}

void out1()
{
	using std::cout;
	cout << "Three blind mice.\n";
}

void out2()
{
	std::cout << "See how they run.\n";
}