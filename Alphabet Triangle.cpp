#include<iostream>
using namespace std;
int main(){
int n,i,j;
cout<<"enter the row";
cin>>n;
for(i=1;i<n;i++){
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
        cout<<char('A'+j-1);
    }
    for(j=i-1;j>=1;j--){
        cout<<char('A'+j-1);
    }
 cout<<endl;   
}
return 0;
}

/*
OUTPUT:
enter the row10
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
    ABCDEFEDCBA
   ABCDEFGFEDCBA
  ABCDEFGHGFEDCBA
 ABCDEFGHIHGFEDCBA

*/
