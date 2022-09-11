#include<iostream>
using namespace std;

int finduniq(int arr[],int num)
{   int ans=0;
    int x=0;
    int i=0;
    
      for( i=0;i<num;i++)
   {   for( x=0;x<num;x++)
     {
       if(arr[i]==arr[x]);
       break;
     }
     if(i==x)
     {
        cout<<arr[i]<<" ";
     }
 }
    return 0;
}

int main(){
     int num;
     int arr[100];
     cout<<"\n enter number of element ";
     cin>>num;
     
     
     

     cout<<"\n enter arr elements";
     for(int i=0;i<num;i++)
     {
        cin>>arr[i];
     }

     int uniq= finduniq(arr,num);
     cout<<uniq;
 return 0;
}   