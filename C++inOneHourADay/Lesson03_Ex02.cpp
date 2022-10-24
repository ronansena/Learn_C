
#include <iostream>

using namespace std;
int main()

{
    //short

    unsigned short uShortValue = 65535;

    cout << "unsigned short 65535 + 1 = ";

    cout << ++uShortValue << endl;

    short signedShort = 32767;

    cout << "signed short 32767 + 1 = ";

    cout << ++signedShort << endl;

    //Int

    unsigned int uIntValue = 4294967295;

    cout << "unsigned Int 4294967295 + 1 = ";

    cout << ++uIntValue << endl;

    int signedInt = 2147483648;

    cout << "signed int 2147483648 + 1 = ";

    cout << ++signedInt << endl;

    //Long

    unsigned long uLongValue =  18446744073709551615;

    cout << "unsigned Long 18446744073709551615 + 1 = ";

    cout << ++uLongValue << endl;

    long  signedLong = 9223372036854775807;

    cout << "signed Long 9223372036854775807 + 1 = ";

    cout << ++signedLong << endl;

    return 0;
}
