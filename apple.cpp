#include <iostream>
using namespace std;

class Apple
{
    friend class AppleTree; //we need to create a friend class in order to get access con AppleTree
    private:
    //Constructor (do nothing) 
    Apple() {}
};

class AppleTree
{
    public:
    Apple createApple()
    {
        Apple apple;
        cout << "Apple created!" << endl;
        return apple;
    }
};

int main()
{
    AppleTree tree; //Create new object of class appletree
    Apple apple = tree.createApple();   //Call the constructor of Apple through apple;
    return 0;
}