#include <iostream>
using namespace std;
int main()
{
    int size;
    int arr[100];
    int i = 0;
    cout << "enter the arr size";
    cin >> size;

    cout << "enter arr element";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        arr[arr[i] % size] = arr[arr[i] % size] + size;
    }

for (i = 0; i < size; i++)
{
    if (arr[i] >= size * 2)
    {
        cout << " " << i;
    }
}

return 0;
}