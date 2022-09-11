#include <iostream>
using namespace std;
class complex
{
 protected:
    int real, img;

 public:
    void getdata()
    {
        cout << " enter of real of number";
        cin >> real;
        cout << "\n enter imagnary of number";
        cin >> img;
    }
    void display()
    {
        cout << "the imagnary number u enter is" << real << " + " << img << "i";
    }
    complex add(complex c2)
    {
        complex temp;

        temp.real = real + c2.real;
        temp.img =img + c2.img;
        return temp;
    }
};
int main()
{

    complex c2, c3, c4;
    c2.getdata();
    c2.display();
    c3.getdata();
    c3.display();
    c4 = c3.add(c2);
    c4.display();
    return 0;
}