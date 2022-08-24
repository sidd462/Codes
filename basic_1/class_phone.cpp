#include <iostream>
using namespace std;
class phone
{
    public:
    
    string model;
    int price;
    int ram;
    string colour;

};

int main()
{
phone user1;

    cout<<"Enter your phone model ";
    cin>>user1.model;
    cout<<"\nEnter your prices";
    cin>>user1.price;
    if(user1.price>=50000)
    {
        cout<<"\nThat's expensive ";
    }
    cout<<"\nEnter amount of ram in your phone ";
    cin>>user1.ram;
    
}