#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a=1,n;
    cin >> n;


    while(a<n)
    {
        a *= 2;
    }
    if(a>n)
        a /= 2;
    cout << a;

    return 0;
}
