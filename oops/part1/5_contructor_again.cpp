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
~student()
{
 //   cout<<"destructor called\n";//can not be automatically called for dynamic allocation. delete s4 and  destructor would be called
}
student()  
{//DEFAULT CONSTRUCTOR
//cout<<"constructor called\n";

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
student s1;                        //constructor 1 called
student s2(101);                   //constuctor 2 called
student s3(20,102);                //constuctor 3 called
student s4(s3);                   //copy construcotr called 
s1=s2;                              //copy assigment called
student s5=s4;                     //!copy constuctor called this line is equal to student s5(s4);
}/*SIDD462  
*/