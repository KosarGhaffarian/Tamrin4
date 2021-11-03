#include <iostream>

using namespace std;

int main()
{
    int n,fact=1;

    cout << "enter your number---> ";
    cin >> n;



    for(int i=1 ; i<n ; i++)
    {
        if(fact<n)
        {
            fact = fact*i;
        }
    }


    if(fact==n )
    {

        cout << "true";
    }

    else
    {

        cout<<"false";
    }




    return 0;
}
