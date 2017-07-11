//hexoct.cpp -- shows hex and octal constants
#include <iostream>
using namespace std;
int main()
{
    int chest = 42;   //decimal integer constant
    int waist = 0x42; //hexadecimal integer constant
    int inseam = 042; //octal integer constant

    cout << "Monsiteur cuts a striking figure!\n";
    cout << "chest = " << chest << endl;
    cout << "waist = " << waist << endl;
    cout << "inseam = " << inseam << endl;
    void displayValuesInHexAndOctal();
    displayValuesInHexAndOctal();
    return 0;
}

void displayValuesInHexAndOctal()
{
    cout << "\n\n";
    cout << "display values in Hex and Octal :\n";
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    int ins = 42;

    cout << "Monsiteur cuts a striking figure!\n";
    cout << "chest = " << chest << " (decimal) "<< endl;
    cout << hex ;//mainpulator for changing number base
    cout << "waist = " << waist << " hexadecimal " <<endl;
    cout << oct;//mainpulator for changing number base
    cout << "inseam = " << inseam << " (octal) " << endl;
    cout << dec;
    cout << "ins = " << ins << " (decimal) " << endl;
}