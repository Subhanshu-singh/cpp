#include<iostream>
using namespace std;
void printcount(int n)
{
    int i;
   
    for(i=1;i<=n;i++)
    {
        cout<<"  "<<i;
    }

}
bool isprime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
        {
            return false;
        }
        return true;
    }

    
}
int main(){
    int n;
     cout<<"\n enter number to count";
    cin>>n;
printcount(n);
isprime(n)>0 ? cout <<"\n is a prime no" :cout<<"\nis not a prime no";
return 0;
}