#include<iostream>
using namespace std;

int main()
{
    cout<<"Program Started"<<endl;

    int a,b,c;
    cout<<"Enter the value of A and B:";
    cin>>a>>b;
  try{
      if(b==0)
      throw b;
        c=a/b;
        cout<<"Result: "<<c<<endl;
  }
  catch(int x){
      cout<<"It cannot divided by: "<<x<<endl;
  }
   
cout<<"Program Ended: "<<endl;
  return 0;
}



/*
OUTPUT:
Program Started
Enter the value of A and B:10 0
It cannot divided by: 0
Program Ended: 



2 OUTPUT:
Program Started
Enter the value of A and B:10 5 
Result: 2
Program Ended: 

*/
