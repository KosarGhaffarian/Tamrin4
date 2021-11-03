#include <iostream>
using namespace std;
int BMM(int a, int b)
{
    if (b == 0)
        return a;
    return BMM(b, a % b);
}
int main()
{
    int a, b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;


    cout<<"bmm of "<< a <<" and "<< b <<" is "<< BMM(a, b);
    return 0;
}
