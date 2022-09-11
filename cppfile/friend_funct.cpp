//cls friend function
#include<iostream>
using namespace std;

 class sec;
 class first{
            int x;
            public:
            void getdata( int a)
            {
                x=a;
            }
            void show()
            {
                cout<<x<<endl;
            }
            friend class sec;
 };
 class sec{
     int p;
     public:
     void get(first obj)
     {
         p=obj.x+5;
     }
   
     void disp(){
         cout<<" disp is "<<p;
     }
 };
 

int main(){
first obj;
sec obj2;
obj.getdata(8);
obj. show();
  obj2.get(obj);
 obj2.disp();
return 0;
}