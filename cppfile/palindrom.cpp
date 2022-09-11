#include<iostream>
using namespace std;
    
int main()
{
    int num,i;
    int rev,sum=0;
     cout<<"\n enter number for check whether number is palindrom \n";
     cin>>num;
     int temp=num;
     while(num!=0)
    {
        rev=num%10;
        sum=(sum*10)+rev;
        num=num/10;

    }
    if(sum==temp)
    {
        cout<<temp<<" is palindrom num";
    }
    else
      cout<<temp<<"is not palindrom num";
    return 0;

}