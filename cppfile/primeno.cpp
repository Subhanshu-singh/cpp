#include <iostream>

using namespace std;
int main()
{
    int num,i;
     cout<<"\n enter number to check whether number is prime or not";
       cin>>num;
       for(i=2;i<=(num/2);i++)
       {
           if (num%i==0)
           {
               cout<<" \n the number "<<num<< " is not a prime number";
                break;
           }
           
       }
       if(i>(num/2))
       {
           cout<<"\n the number "<<num<<" is a prime number";
       }

    return 0;

}