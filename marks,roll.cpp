
#include<iostream>

using namespace std;
class student{
    public:
    int marks,roll;
    void getmarks()
    {
        cout<<"Marks of students is :";
        cin>>marks;
        cout<<endl;
             cout<<"Marks:"<<marks<<endl;
    }
    void getdata();
};
void student::getdata(){
cout<<"students roll no is: ";
    cin>>roll;
     cout<<"Roll No:"<<roll<<endl;
    
}
int main()
{
    student x;
   
    x.getmarks();
     x.getdata();
    return 0;
}