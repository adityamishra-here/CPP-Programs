#include<iostream>
using namespace std;
class A{
    int a,b;
 public:
 A(int a , int b){    //parametreised
    
     cout<<a<<endl<<b;
 }
 

};
int main()
{
    A ob(10,5);
    return 0;
}



/*
OUTPUT:

10
5

*/
