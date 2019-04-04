#include <iostream>
using namespace std;

class Height
{
    double inches;
    public:
    Height (double inch) : inches(inch) { }
    friend void print_feet(Height);
};

void print_feet(Height h)
{
    cout << "Height on feet: " << h.inches * 0.0083 << endl;
}

int main()
{
    Height h(83);
    print_feet(h);
    return 0;
}