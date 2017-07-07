//convert.cpp
#include <iostream>
#include <cstdlib>

int stoneolb(int);//function prototype

int main(){
	using namespace std;
	int stone;
	cout << "Enter the weight in stone : ";
	cin >> stone;
	int punds = stoneolb(stone);
	cout << stone << " stone = " << punds << " pounds.\n";
	cin.get();
	cin.get();
	return 0;
}

int stoneolb(int stone)
{
	return stone * 14;	
}