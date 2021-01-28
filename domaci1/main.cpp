#include <iostream>

using namespace std;

int main()
{
    int a,b=1,i;
    cout << "unesite broj:";
    cin >> a;
    for(i=1;i<=a;i++)
    {
        b*=i;
    }
    cout << "faktorijal broja je:" << b;
    return 0;
}
