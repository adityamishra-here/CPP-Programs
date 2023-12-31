#include<iostream>
using namespace std;
class A{
    int x,y;
 public:
 A(int a , int b){    //parametreised
     x=a;
     y=b;
     cout<<a<<endl<<b<<endl;
 }
 A(A &ref){                    //Copy constructor
     x=ref.x;
     y=ref.y;
     cout<<x<<endl<<y;
 }

};
int main()
{
    A ob(100,50);
    A ob2=ob;
    return 0;
}


/*
OUTPUT:
100
50
100
50

  */
