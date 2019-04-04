#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


/*
int avoidObstacles(std::vector<int> inputArray)
{
    //size will be 40.
    for (int i = 2; i < 40; ++i)
    {
        int j = 0;
        cout << "trying " << i << endl;
        for (; j < inputArray.size(); ++j)
        {
            cout << "i%j  " << i << "%" << inputArray[j] << ": " << i % inputArray[j] << endl;
            if (i <= inputArray[j] and inputArray[j] % i == 0)
            {
                break;
            }
        }
        cout << "j= " << j << " and inputarray.size()= " << inputArray.size() << endl;
        if (j == inputArray.size())
        {
            return i;
        }
    }
    return 40;
}
*/


int avoidObstacles(std::vector<int> inputArray)
{   
    int jump;
    int i;

    for (jump = 2;; jump++)
    {    
        bool colision = true;
        for (int n : inputArray)
        {
            colision = colision && (n % jump != 0);
                       
        }
        if(colision) 
            return jump;
    }
}

int main()
{
    std::vector<int> v1 = {5, 3, 6, 7, 9};
    cout << avoidObstacles(v1) << endl;

    std::vector<int> v2 = {2,3};
    cout << avoidObstacles(v2) << endl;

    std::vector<int> v3 = {1, 4, 10, 6, 2};
    cout << avoidObstacles(v3) << endl;

    std::vector<int> v4 = {19, 32, 11, 23};
    cout << avoidObstacles(v4) << endl;

    std::vector<int> v5 = {5, 8, 9, 13, 14};
    cout << avoidObstacles(v5) << endl;

    return 0;
}

/*
int avoidObstacles(std::vector<int> a)
{
    for (int i = 2;; i++)
    {
        bool t = true;
        for (int n : a)
            t = t && n % i != 0;
        if (t)
            return i;
    }
}



int avoidObstacles(std::vector<int> inputArray)
{   
    int object;
    int jump = 2;
    int i;
    std::sort(inputArray.begin(), inputArray.end());

    for (object = 0; ; (object = object + jump))
    {    
        bool colision = true;
        for(i = 0; i < inputArray.size(); i++)
        {
            colision = colision && object == inputArray[i];
                       
            if (object == inputArray[i]) //Choca con objecto
            {
                object = 0;     //reinicia el objecto
                jump++;         //El tamaño de brinco aumenta         
                break;          //termina de revisar pues ya colisiono
            }
        }
    }
    return jump;
}
*/