#include<iostream>
using namespace std;
class A{
    int a,b;
 public:
 A(){    //default
     a=10;
     b=100;
     cout<<a<<endl<<b;
 }
 

};
int main()
{
    A ob;
    return 0;
}



/*
OUTPUT:    
10
100
*/
