#include<iostream>
#include<conio.h>

 using namespace std;

 class cylinder
 {
     protected:
     int h,r,vol,sur;
     public:
     


     void volumn()
     {
     cout<<"\n enter radius for cylinder";
     cin>>r;
     cout<<"\n enter heigth";
     cin>>h;
         vol=3.14*r*r*h;
         cout<<"\n volumn of cylinder is "<<vol;
     }
     void surfacearea()
     {
         
     cout<<"\n enter radius for cylinder";
     cin>>r;
     cout<<"\n enter heigth";
     cin>>h;
         
         sur=2*3.14*r*r+r*h;
         cout<<"\n surface area of cyliner is "<<sur;
     }
 };
 
 int main()
 {
     cylinder cyl;
     cyl.volumn();
     cyl.surfacearea();

return 0;
 }
