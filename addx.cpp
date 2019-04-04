#include <iostream>
using namespace std;

class AddX
{
    public:
    explicit AddX(int v) : value(v) { }
    int operator()(int other_val)
    {
        return value + other_val;
    } 
    private:
    int value;
};

int main()
{
    AddX add_five(5);
    cout << add_five(4) << endl;
    return 0;
}