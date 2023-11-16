#include<iostream>
using namespace std;

void update(int *a,int *b) {
    int a_v=*a,b_v=*b;
    *a=a_v+ b_v;
    *b=abs(a_v- b_v);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
   cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}
