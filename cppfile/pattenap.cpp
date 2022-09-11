#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "enter n";
    cin >> n;

    /* for a left primid
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }*/

    // for half primd after 180 means right
    /*for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }

        }
            cout << endl;
      */

     //half primid using number
    /* for ( i = 1; i <=n; i++)
     {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<i;
            }
        }
        cout<<endl;
     }
     */

    //floyd tringle
    /*
    int num=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j){
                cout<<num<<" ";
                num++;
            }
        }
        cout<<endl;
    }
    */

   //butterfly pattern for n=4;
   
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          cout<<"*";
        }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
              for(j=1;j<=i;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
   
   for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
          cout<<"*";
        }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
              for(j=1;j<=i;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}