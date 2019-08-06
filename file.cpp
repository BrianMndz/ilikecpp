#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ofstream myInputFile ("input.txt", ios::app);
    if(myInputFile.is_open())
    {
        myInputFile << "\tThis is how we roll in the shire\n";
        myInputFile << "Whats wrong man?" << endl;
        myInputFile.close();
    }
    else cout << "unable to open file" << endl;

    return 0;
}