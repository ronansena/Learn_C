// C++ program to implement close() function
#include <fstream>
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    char data[100];
 
    // Open a file in write 
    // mode.
    ofstream outfile;
    outfile.open("gfg.dat");
 
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
 
    // This function will take the entire
    // the user enters and will store in
    // the "data" array declare above
    cin.getline(data, 100);
 
    // Write inputted data into
    // the file.
    outfile << data << endl;
 
    // Here we make use of the close()
    // function to close the opened file
    outfile.close();
 
    // Open a file in read mode
    ifstream infile;
    infile.open("gfg.dat");
 
    cout << "Reading from the file"
         << endl;
    infile >> data;
 
    // Write the data at the screen
    cout << data << endl;
 
    // Close the opened file
    infile.close();
 
    return 0;
}