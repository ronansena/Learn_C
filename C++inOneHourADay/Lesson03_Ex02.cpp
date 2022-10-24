
#include <iostream>

using namespace std;
int main()
{
    //short
    
    unsigned short uShortValue = 65535;

    cout << "==========================================================="<< endl;

    cout << "==========================================================="<< endl;

    cout << "Tamanho em Bytes unsigned short: " << sizeof uShortValue << endl;

    cout << "Tamanho em Bits unsigned short: " << sizeof uShortValue*8 << endl;

    cout << "unsigned short 65535 + 1 = ";

    cout << ++uShortValue << endl;

    cout << "==========================================================="<< endl;

    short signedShort = 32767;

    cout << "==========================================================="<< endl;

    cout << "Tamanho em Bytes signed short: " << sizeof signedShort << endl;

    cout << "Tamanho em Bits signed short: " << sizeof signedShort*8 << endl;

    cout << "signed short 32767 + 1 = ";

    cout << ++signedShort << endl;

    cout << "==========================================================="<< endl;

    //Int

    unsigned int uIntValue = 4294967295;

    cout << "==========================================================="<< endl;

    cout << "Tamanho em Bytes unsigned int: " << sizeof uIntValue << endl;

    cout << "Tamanho em Bits unsigned int: " << sizeof uIntValue*8 << endl;

    cout << "unsigned Int 4294967295 + 1 = ";

    cout << ++uIntValue << endl;

    cout << "==========================================================="<< endl;

    int signedInt = 2147483648;

    cout << "==========================================================="<< endl;

    cout << "Tamanho em Bytes signed int: " << sizeof signedInt << endl;

    cout << "Tamanho em Bits signed int: " << sizeof signedInt*8 << endl;

    cout << "signed int 2147483648 + 1 = ";

    cout << ++signedInt << endl;

    cout << "==========================================================="<< endl;

    //Long

    unsigned long uLongValue =  18446744073709551615;

    cout << "==========================================================="<< endl;

    cout << "Tamanho em Bytes unsigned long: " << sizeof uLongValue << endl;

    cout << "Tamanho em Bits unsigned long: " << sizeof uLongValue*8 << endl;

    cout << "unsigned long 18446744073709551615 + 1 = ";

    cout << ++uLongValue << endl;

    cout << "==========================================================="<< endl;

    long  signedLong = 9223372036854775807;

    cout << "==========================================================="<< endl;

    cout << "Tamanho em Bytes signed long: " << sizeof signedLong << endl;

    cout << "Tamanho em Bits signed long: " << sizeof signedLong*8 << endl;

    cout << "signed Long 9223372036854775807 + 1 = ";

    cout << ++signedLong << endl;

    cout << "==========================================================="<< endl;

    cout << "==========================================================="<< endl;

    return 0;
}
