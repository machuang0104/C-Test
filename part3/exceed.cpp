//exceed.cpp -- exceeding some integer limits
#include <iostream>
#include <climits>
#define ZERO 0;
// const int ZERO = 0;

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\n"
         << "Add $1 to each accout." << endl
         << "Now ";
    sam = sam + 1;
    sue++;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each accout." << endl
         << "Now ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Lucky SUe!" << endl;

    return 0;
}