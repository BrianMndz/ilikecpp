#include <iostream>
#include <array>
using namespace std;

int& getMaxIndex(std::array<int, 10> &arrayin, int index1, int index2)
{
    
    int maxIndex;
    if(index1 >= index2)
        maxIndex = index1;
    else
        maxIndex = index2;
        
    return arrayin[maxIndex];
}

int main()
{
    std:array<int, 10> arr = {1,1,2,3,5,8,13,21,34,55};

}