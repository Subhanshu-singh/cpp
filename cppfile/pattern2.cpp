#include <iostream>
using namespace std;

int main()
{

   int i, n, j;
   cout << " enter n";
   cin >> n;
   /*
   for(i=1;i<=n;i++){
      for(j=1;j<=n;j++)
   {
      if(i<=j)
      {
          cout<<j;
      }
   }
   cout<<endl;
   }*/

   /*
   triangle
   1
   01
   101
   0101
   10101
      for (i = 1; i <= n; i++)
      {
         for (j = 1; j <= i; j++)

            if ((i + j) % 2 == 0)
            {
               cout << "1";
            }
            else
            {
               cout << "0";
            }

         cout << endl;
      }*/

   /*  triangle with no;
      1
    1 2
   1 2 3
  1 2 3 4

    for (i = 1; i <= n; i++)
     {
        for (j = 1; j <= n - i; j++)
        {
           cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
           cout << j<<" ";
        }
        cout << endl;
     }*/

   /* palndrom pattern
     1
  2 1 2
 3 2 1 2 3
4 3 2 1 2 3 4
   */

   /* for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= n-i; j++)
       {
          cout <<" ";
       }
       int k = i;
       for (; j <= n; j++)
       {
          cout <<k--<<" ";
       }
       k = 2;
       for (; j <= n + i - 1; j++)
       {
          cout << k++<<" ";
       }
       cout << endl;
    }*/

      /*
      1234
      1234
      1234
      1234
     for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= n; j++)
       {
          cout <<j;
       }
      cout<<endl;

    }*/

   /*
    1 
    2 3
    4 5 6
    7 8 9 10
    int k=1;
    for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= i; j++)
       {
          cout <<k++<<" ";
       }
      cout<<endl;

    }
    */
     /* enter n4
      AAAA
      BBBB
      CCCC
      DDDD
      char ch='A';
     for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= n; j++)
       {
            char chr=ch+i-1;
            cout<<chr;
         
       }
      cout<<endl;

    }
    */

   /*  enter n4
         ABCD
         ABCD
         ABCD
         ABCD
         char ch='A';
     for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= n; j++)
       {
            char chr=ch+j-1;
            cout<<chr;
         
       }
      cout<<endl;

    }
   */ 

      /*
      enter n3
      ABC
      DEF
      GHI

       char ch='A';
     for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= n; j++)
       {
            cout<<ch++;
         
       }
      cout<<endl;

    }
   */

     char ch='A';
     for (i = 1; i <= n; i++)
    {
       for (j = 1; j <= i; j++)
       {
            char chr= ch +i+j-2;

         cout<<chr;
       }
      cout<<endl;

    }
   
   return 0;
}