#include<iostream>
using namespace std;

class student{

    protected:
    int rollno;
    public:
    void setno(int a){
        rollno=a;

    }
    void printno(void)
    {
        cout<<"your roll no is"<<rollno<<endl;

    }
};
class test:virtual public student
{
    protected:
    float math,physics;
    public:
    void setmarks( float m1,float m2)
    {
        math=m1;
        physics=m2;  
    }

    void printmarks(void)
    {
        cout<<"\n marks of math is"<<math<<" \n marks of physics"<<physics;

    }
};

class sprorts:virtual public student
{
    protected:
    float score;
    public:
    void setscore(float s )
    {
        score=s;
    }
    void printscore(void)
    {
        cout<<"\n score is "<<score<<endl;

    }


};

class result:public sprorts ,public test
{
    protected:
    float total=0;
    public:
    
    void printresult()
    {   
         total=math+physics+score;
        printno();
        printmarks();
        printscore();
        cout<<"\n  your totral score is"<<total;
    }
};
int main(){
result harry;
harry.setno(420);
harry.setmarks(78,68.7);
harry.setscore(34);
harry.printresult();

return 0;
}