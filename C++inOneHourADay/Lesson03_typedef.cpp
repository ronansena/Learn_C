
 #include <iostream>

 using namespace std;
 int main()

 {

 typedef bool TRUE_OR_FALSE_TYPE;
 
 TRUE_OR_FALSE_TYPE  coinFlippedHeads = true;
 
 int someNumber_bit = 0b1010; 
 int someNumber_hexa = 012; 

 cout  <<  "coinFlippedHeads = " << coinFlippedHeads << ", ";

 cout  << "sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;

  cout  <<  "someNumber = " << someNumber_bit << ", ";

 cout  << "sizeof(someNumber) = " << sizeof(someNumber_bit) << endl;

   cout  <<  "someNumber = " << someNumber_hexa << ", ";

 cout  << "sizeof(someNumber) = " << sizeof(someNumber_hexa);


 return 0;

 }
