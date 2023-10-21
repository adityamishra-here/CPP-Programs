
#include <iostream>
using namespace std;

int main()
{
    int a[3][3],b[3][3],c[2][2],i,j;
cout<<"Enter the Matrix A "; 
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
              cin>>a[i][j];    
        }
    }
      cout<<"\n Enter the Matrix B ";  
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           cin>>b[i][j];    
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j] = a[i][j]  + b[i][j];
        }
    }
    cout<<"\n"<<endl;
 for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<c[i][j];
            cout<<" "<<endl;
             
        }}

    return 0;
}