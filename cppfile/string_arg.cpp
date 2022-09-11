#include<iostream>
#include<string.h>

void passbyvalue(std::string str)
{
    std::cout<<"  \n by value :::: "<<str<<endl;
}
void passbyref( const std::string &a)
{
    std::cout<<" by reference ::::"<<a<<endl;

}
void passbyadd( const std::string *ad)
{
    std::cout<<"by address ::::"<<*ad<<endl;
}
int main(){ 
    
    string str[20];

   std::cout<<"\n enter string of 20 char only";
    std::cin>>str;

    passbyvalue(str);
     passbyref( str);
    passbyadd(&str);


return 0;
}