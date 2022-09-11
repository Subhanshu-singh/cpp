#include <iostream>
#include <conio.h>

using namespace std;

class cal
{
protected:
    int a, b, i, n;
    float c;

public:
    cout << "enter your operation 1,add 2,sub 3,multiple 4,divide" << endl;
    cin >> n;

    cout << "enter two opertant a and b";
    cin >> a >> b;

    switch (n)
    {
    case 1:
        c = a + b;
        cout << c << endl;

        break;
    case 2:
        c = a - b;
        cout << c << endl;

        break;

    case 3:
        c = a * b
                    cout << c << endl;
        break;

    case 4:
        c = a / b
                
            cout<< c << endl;
        break;

    default:
        cout << "wrong input dear enter valid plz";
        break;
    }
};

int main()
{
    using namespace std;
    cal c;

    return 0;
}