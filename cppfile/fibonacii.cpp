#include <iostream>
#include <conio.h>
using namespace std;

int faboncci(int num)
{

    int a = 0, b = 1, c;


    for(int i=2;i<=num;i++)        
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    
    }
    return 0;
}
int main()
{

    int num;

    cout << " enter number for fabnoic series";
    cin >> num;
    faboncci(num);

    return 0;
}
