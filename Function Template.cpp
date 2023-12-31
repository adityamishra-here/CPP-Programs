#include<iostream>
using namespace std;
template <class A>
void print(A a, A b){
    cout<<a<<" "<<b<<endl;
}


int main() {
  print(10,20);
  print("Aditya","Mishra");
  print(1.036,2.0837);
    return 0;
}


/*
OUTPUT:
10 20
Aditya Mishra
1.036 2.0837

*/
