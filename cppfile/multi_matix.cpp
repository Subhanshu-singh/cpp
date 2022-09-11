#include <iostream>
#include <conio.h>
#include<string>
using namespace std;

int main()
{
    int i, j, k, sum;
    int a[3][3], b[3][3], c[3][3];
    cout << "\n enter 3*3 matrix";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"\n enter b matrix of3*3";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }    
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    c[i][j] += a[i][k] * b[i][k];
                }
            }
        }

   cout<<"\n multiple of matrix is ";
  for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<endl<< c[i][j]<<" " ;
        }
        cout<<endl;
        
        
    }
    return 0;
}   