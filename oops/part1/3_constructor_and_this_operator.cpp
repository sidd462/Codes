#include <bits/stdc++.h>
using namespace std;
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
student s1;
s1.display();
student s2;
student *s3=new student;
cout<<"Parametrized constructors Demo\n";
student s4(4);
s4.display();

cout<<"\n\n dynamic allocation\n";
student *s5=new student(10);
s5->display();//(*s5).display();

student* s6=new student(3,4);
s6->display();


}
/*SIDD462
*/