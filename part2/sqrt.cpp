//sqrt.cpp --using the sqrt() function

#include <iostream>
#include <cmath>//sqrt,pow
#include <cstdlib>//rand,srand
#include <ctime>//time

int main()
{
	using namespace std;
	double area;
	cout << "Enter the floor area, in square feed, of your home:\n";
	cin >> area;
	double side = sqrt(area);
	cout << "That's the equaivalent of a square " << side << " feet to the side.\n";
	cout << "How fascinating!\n";
	cout << pow(2,10) <<endl;//计算（a,b：a^b，a的b次方）

	srand(time(NULL));//设置随机数种子
	cout << rand() <<endl;//获得一个随机整数 cstdlib
	return 0;
}