#include<iostream>
using namespace std;
template <class A>
class print{
    public:

    print(A a, A b){
    cout<<a<<" "<<b<<endl;
}
};

int main() {
    print <int> ob(10,50);
   print <int> ob1(1.2345,5.34);
    // in this we can only input or diplay int datatypes only
    return 0;
}


/*
OUTPUT:
10 50
1 5


  */
