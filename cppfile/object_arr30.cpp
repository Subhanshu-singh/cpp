#include<iostream>
using namespace std;

class student
{
    public:
    int rollno,marks,per;
    char name[20];
    
    void readdata()
    {
        cout<<"\n enter name of student";
        cin>>name;
        cout<<"\n enter rollno";
        cin>>rollno;
        cout<<"\n enter marks out of 200";
        cin>>marks;

    }

    void compute()
    {
        
        per=marks/2;
    }

    void display()
    {
        cout<<" \n name of student is"<<name;
        cout<<"\n roll number of "<<rollno;
        cout<<"\n mark is"<<marks;
        cout<<"\n percentage is"<<per;
    }

};

int main()
{
     student std[10];
        int i,n;
        for(i=0;i<n;i++)
             std.readdata();
    
    

    return 0;
}