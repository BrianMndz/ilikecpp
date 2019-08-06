#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

std::vector<int> avoidObstacles(std::vector<int> inputArray)
{
    std::sort(inputArray.begin(), inputArray.end());
    return inputArray;
}

int main()
{
    std::vector<int> v = {5, 3, 6, 7, 9};
    v = avoidObstacles(v);
    
    for(auto a : v)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}