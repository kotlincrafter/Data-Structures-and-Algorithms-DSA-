#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "previous a:" << a << endl;
    // int b = a++; // kaam;update
    // cout << b << endl;//10 store ho jayega
    // cout << a;//11 baad m update ho jaeyga
    int b = ++a; // update;kaam
    cout << b << endl;
    cout << a;
}