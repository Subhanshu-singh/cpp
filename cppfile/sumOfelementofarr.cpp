#include <iostream>
using namespace std;

void sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum of all element of element is" << sum;
}

void linearSearch(int arr[], int size)
{
    int key;
    cout << "\n enter key to search";
    cin >> key;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "\n element found at index " << i;
        }
    }
}
void reversearr(int arr[], int size)
{
    int i=0;
    int end=size;
    int temp=1;
   while(i!=end)
   {
    arr[i]=arr[end];
    temp=arr[i];
    arr[end]=temp;
    end--;
    i++;
   
   }
   int j;
   for(j=0;j<size;j++)
   {
    cout<<" "<<arr[j];
   }

   
}


    int main()
    {
        int arr[100];
        int size;
        cout << "\n enter size of array";
        cin >> size;

        cout << "enter element of array";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        // sum(arr, size);
        // linearSearch(arr, size);
        reversearr(arr,size);

        return 0;
    }