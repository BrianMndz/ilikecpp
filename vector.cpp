#include <iostream>
using namespace std;

int main(){
    int v1[10] = {1,2,3,4,5,6,7,8,9,10};
    int v2[10];

    for(auto i = 0; i < 10; i++){
        v2[i] = v1[i];
        cout << v1[i] << " ";
    }
    cout << endl;

    //new for form. For each x on v2:
    //For every v2[i], place a copy in x and print...
    for (auto x : v2) {
        cout << x << " ";
    }
    cout << '\n';

    //& reference to. 
    for(auto &x : v1){
        cout << v1[x] << " ";
        //++x;
    }
    return 0;
}
