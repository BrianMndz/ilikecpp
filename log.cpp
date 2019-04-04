#include <iostream>
#include <string>

using namespace std;

class Logger
{
    public:
    void operator()(const std::string &s)
    {
        std::cout << s << endl;
    }
};

int main()
{
    Logger loggie;
    loggie("Hello world!");
    loggie("Keep learning C++!");
    return 0;
}