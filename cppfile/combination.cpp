#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1 ;i<=n ;i++){
        fact=fact*i;
    }

    return fact;

}

int combination(int n,int r)
{
    int nume=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    
    return nume/deno;
    
}

int main(){
    int n,r;
cout<<"enter n ";
cin>>n;
cout<<" \nenter r ";
cin>>r;
cout<<combination( n, r);

return 0;
}