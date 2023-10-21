#include <iostream>
using namespace std;
class car{
    public:
    int s,m;
    void speed()
    {
        cout<<"Enter the Speed of Car:";
        cin>>s;
        cout<<"Speed:"<<s<<endl;
    }
    void mileage()
    {
        cout<<"Enter the Mileage of Car:";
        cin>>m;
        cout<<"Mileage:"<<m<<endl;
    }
};
int main()
{
    car x1;
    x1.speed();
    x1.mileage();
    cout<<""<<endl;
    cout<<"Ram Ram Bhai sara na:";

    return 0;
}




OUTPUT:
Enter the Speed of Car:100
Speed:100
Enter the Mileage of Car:25
Mileage:25

Ram Ram Bhai sara na:
