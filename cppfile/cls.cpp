#include<iostream>
using namespace std;
class student
{
    char name[20];
    int mark,rollno;
    public:
    student 
    {
        name="abc";
        mark=0;
        rollno=0;
    }
    void getdata()
    {
        cout<<"\n enter name of student";
        cin>>name;
        cout<<"\n enter rollno";
        cin>>rollno;
        cout<<"\n enter total marks";
        cin>>mark;
    }
};

int main()
{
 student s1;
 s1.getdata();
return 0;
}