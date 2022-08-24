#include <bits/stdc++.h>
using namespace std;
class student{
    int age;
public:
    char *name;
    student(int age, char*name)
    {
        this->age=age;
      //  this->name=name;//!shallow copy
      this->name=new char[strlen(name)+1];//!deep copy
      strcpy(this->name,name);
   }
   student(const student& s)//error    student(student s)  //!copy constructor 
   {this->age=s.age;
   this->name=new char[strlen(s.name)+1];
   strcpy(this->name,s.name);


   }
void display()
{
    cout<<name<<" "<<age<<endl;
}
};
int main(){
    char name[]="abcd";
    student s1(20,name);
    s1.display();
    student s2(s1);//shallow copy in inbuilt copy constructor 
    s2.name[0]='x';
    s1.display();
    s2.display();

}
/*SIDD462
*/