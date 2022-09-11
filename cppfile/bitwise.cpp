#include <iostream>
using namespace std;
int main()
{
    /*
int a=4;
int b=6;

cout<<"a and b "<<(a&b);//and
cout<<"\n a or b "<<(a|b);//or
cout<<"\n a not "<<(~a);//not
cout<<"\n a not "<<(~b);
cout<<"\n a xor b "<<(a^b);//xor

cout<<"\n 17 right shift 1 is "<<(17>>1);
cout<<"\n 17 right shift 2 is "<<(17>>2);
cout<<"\n a right shift 1 is "<<(a>>1);
cout<<"\n bleft shift 1 is "<<(b<<1);
cout<<"\n 17 left shift 1 is "<<(17<<1);
cout<<"\n 17 left shift 2 is "<<(17<<2);

*/

// for(int a=0,b=1;a>=0&&b>=1;a--,b--)
// {
//     cout<<a<<endl<<b;
// }
//sum of n number
/*
int sum=1; 
int n; 
 
 cout<<"enter the num";
 cin>>n;
 for (int i = 0; i <= n; i++)
 {
    
    sum=sum+i;   

 }
 cout<<sum<<endl;
 */

//fibonaci series
/*
int a=0,b=1;
int n,fib;
cout<<"enter the no for fib ";
cin>>n;
cout<<"fib no series is 0 1 ";

for (int i = 1; i <= n; i++)
{
    
    fib=a+b;
    a=b;
    b=fib;
    int tem=a;
cout<<fib <<" ";    
}
*/

//prime number
/*
int n;
cout<<"enter number to check whether a number is a prime number ";
cin>>n;
bool is=1;

for( int i=2;i<n;i++)
{
    if(n%i==0)
    {
        is=0;

        break;
    }
}
if(is==0){
    
        cout<<"not a prime num"<<n;
}
else{
    cout<<"is a prime no";
}
*/
/*
int n;
int pro=1;
int sum=0;
cout<<"enter the no";
 cin>>n;
 while(n!=0)
 {
    int rem=n%10;
    pro=pro*rem;
    sum=sum + rem;

    n=n/10;
 }
 int ans= pro - sum;
 cout<<ans;
    return 0;
}
*/
