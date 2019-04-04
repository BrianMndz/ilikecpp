#include <iostream>
using namespace std;

class Coordinates
{
    public:
    Coordinates() { cout << "Constructor!" << endl; }
    ~Coordinates() { cout << "Destructor!" << endl; }
};

int main()
{
    Coordinates c;
    return 0;
}