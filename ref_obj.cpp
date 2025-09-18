#include <iostream>
using namespace std;
class Abc
{
    int n;

public:
    Abc()
    {
        n = 10;
    }
    void getincr()
    {
        ++n;
    }
    void display()
    {
        cout << n;
    }
    
};
int main()
    {
        Abc a, *b;
        b = &a;
        a.getincr();
        a.getincr();
        a.getincr();
        b->display();
    }