#include <bits/stdc++.h>
using namespace std;
class student{
    int age;
    char *name;
public:
    student(int age, char*name)
    {
        this->age=age;
      //  this->name=name;//!shallow copy
      this->name=new char[strlen(name)+1];//!deep copy
      strcpy(this->name,name);
   }
void display()
{
    cout<<name<<" "<<age<<endl;
}
};
int main(){
    char name[]="max";
    student s1(20,name);
    s1.display();
    name[2]='e';
    student s2(23,name);
    s2.display();
    s1.display();


}
/*SIDD462
*/