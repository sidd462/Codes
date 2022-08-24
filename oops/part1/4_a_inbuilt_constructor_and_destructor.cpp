#include <bits/stdc++.h>
using namespace std;
// copy constructor ;copy assigment constructor(=);destructor(~)


class student{
    public :
    int rollnumber;
    private:
    int age;
    public:
    void display()
    {
        cout<<age<<" "<<rollnumber<<endl;
    }
~student()
{
    cout<<"destructor called\n";//can not be automatically called for dynamic allocation. delete s4 and  destructor would be called
}
student()  
{//DEFAULT CONSTRUCTOR
cout<<"constructor called\n";

}
student(int r)
{//parameterized condstructor
    rollnumber=r;
}
student(int r,int a)
{
    age=a;
    rollnumber=r;

}
};

int main(){
student s1(10,1001);
cout<<"s1: ";
s1.display();
student s2(s1);//copy constructor
cout<<"s2: ";
s2.display();
student *s3=new student(s2);
cout<<"s3: ";
s3->display();
student *s4=new student(*s3);
cout<<"s4: ";
s4->display();
student s5(34,12321);
cout<<"s5: ";
s5.display();
s5=*s4;//copy assigment constructor
cout<<"s5: ";
s5.display();
s5=s1;//copy assigment constructor
cout<<"s5: ";
s5.display();
delete s4;//manually calling destor in the case of dynamci allocation
}
/*SIDD462
*/