//morechar.cpp -- the char type and int type contrasted
#include <iostream>

int main()
{
    using namespace std;
    char ch = 'M';  // assign Ascii
    int i = ch;  //store the Ascii code in an int
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code : " << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "DIsplaying char ch using cout.put(ch): ";
    cout.put(ch);
    //
    //using cout.put() to display a char constant
    cout.put('!');
    cout << endl
         << "Done" << endl;
         cout << 'M';
    return 0;
}