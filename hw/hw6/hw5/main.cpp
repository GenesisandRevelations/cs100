#include <iostream>
#include "Array.h"
#include "Matrix.h"
using namespace std;

int main()
{
    typedef Array<int> intStack;
    intStack a(6);
    Array<char> b(4);

    a[0] = 1;
    a[1] = 2;a[2]=1;a[3]=1;a[4]=1;a[5]=1;

    b[0]='1';b[1]='d';b[2]='a';b[3]='e';
    cout << a;
    cout << b;
}
