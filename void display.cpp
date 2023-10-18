
#include<iostream>

using namespace std;
class student{
    public:
    int marks,roll;
    void getmarks()
    {
        cout<<"Marks of students is :";
        cin>>marks;
  
             cout<<"Marks:"<<marks<<endl;
    }
    void getdata();
    void dis();
};
void student::getdata(){
cout<<"students roll no is: ";
    cin>>roll;
     cout<<"Roll No:"<<roll<<endl;
    
}
void student::dis(){
    cout<<endl;
    cout<<"Details of student:"<<endl;
     cout<<"Roll No : "<<roll<<endl;
    cout<<"Marks: "<<marks<<endl;
   
}
int main()
{
    student x;
   
    x.getmarks();
     x.getdata();
     x. dis();
    return 0;
}