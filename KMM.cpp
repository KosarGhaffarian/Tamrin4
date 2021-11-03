#include <iostream>
using namespace std;

int main ()
{

    int a, b, kmm;

    cout << "enter first number: ";
    cin >> a;

    cout << "enter second number: ";
    cin >> b;



    if (a > b)

        kmm = a;

    else

        kmm = b;

    while (true)
    {

        if (kmm % a == 0 && kmm % b == 0)
        {

            cout << "The LCM of " << a << " and " << b << " is " << kmm;

            break;

        }

        kmm++;

    }

    return 0;

}
