//limits.cpp -- some inteqer limits
#include <iostream>
#include <climits>

int main()
{
    using namespace std;

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;

    //sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes.\n";
    cout << "short is " << sizeof(n_short) << " bytes.\n";
    cout << "long is " << sizeof n_long << " bytes.\n";

    cout << "Maximun values : \n";
    cout << "int : " << n_int << endl;
    cout << "short : " << n_short << endl;
    cout << "long : " << n_long << endl;

    cout << "Mininum int value : " << INT_MIN << endl;
    cout << "Bits per byte : " << CHAR_BIT << endl;
    return 0;
}