#include <iostream>
using namespace std;

void swapAlt(int arr[], int size)
{
    int temp = 0;
    if(size%2==0)
   { for (int i = 0; i < size; i = i + 2)
     {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
   }
   else{
             for (int i = 0; i < size-1; i = i + 2)
     {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

   }

    for (int i = 0; i < size; i++)
    {
        cout << "  " << arr[i];
    }
}
int main()
{

    int arr[100];
    int size;
    cout << "\n enter size of arr";
    cin >> size;
    cout << "\n enter arr element";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapAlt(arr, size);

    return 0;
}