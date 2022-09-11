#include <iostream>
using namespace std;

int minOfArr(int arr[],int size)
{       
      int min=INT32_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
                min=arr[i];
        }

    }
    return min;
}
int maxOfArr(int arr[],int size)
{       
      int max=INT32_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
                max=arr[i];
        }

    }
    return max;
}





int main()
{
    int arr[20];
    int size;
    cout << "\n enter the size of array ";
    cin >> size;
    for(int i=0;i<size;i++)
    {
     cin>>arr[i];   
    }
   cout<<"min num is"<< minOfArr(arr, size);
    cout<<"\n max num is"<< maxOfArr(arr, size);

    return 0;
}