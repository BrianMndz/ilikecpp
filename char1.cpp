#include <iostream>
using namespace std;

int count_rep(const char *word, char x);
int count_x(const char *w, char x);

    int main()
{
    const char* w = "Que onda chavos";
    char c = 'a';
    char d = 'o';
    int x = count_rep(w, d);
    cout << x << endl;
    int y = count_x(w,c);
    cout << y << endl;
    return 0;
}

int count_rep(const char *word, char x)
{
    if (word == nullptr)
    {
        return 0;
    }

    int counter = 0;
    for (; *word != 0; word++)
    {
        cout << *word;  //esta fue una buena manera de saber que imprime char a la vez
        if (*word == x)
            cout << x;
            counter++;
    }
    cout << endl;
    return counter;
}

int count_x(const char *w, char x) {
    if(w == nullptr)
        return 0;
    int count = 0;
    while(*w) {
        if(*w == x)
            count++;
        w++;    
    }
    return count;
}