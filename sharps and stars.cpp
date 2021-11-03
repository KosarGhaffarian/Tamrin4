#include <iostream>
using namespace std;


int main()
{
    int n,m,qt=0;

    cout << "enter n for length ";
    cin >> n;

    cout << "enter m for width ";
    cin >> m;



    for (int i=0; i<n ; i++)
    {
        cout<<endl;

        for (int j = 0; j<m ; j++)

        {

            if (i%2 ==0)
            {
                if(j%2 == 1)
                    cout << "#";
                else
                    cout << "*";
            }

            else
            {
               if(j%2 == 1)
                    cout << "#";
                else
                    cout << "*";

            }
        }
    }

       cout<<endl<<endl;



return 0;

}
