
#include <iostream>

using namespace std;
class math{
    public:
    int a=10,b=5,s,m;
    void sum()
    {
        cout<<"Sum: "<<a+b<<endl;
    }
    void mul();
};
void math::mul(){
cout<<"Multiply: "<<a*b<<endl;}
int main()
{
    math x;
    x.sum();
    x.mul();
    

    return 0;
}