#include <bits/stdc++.h>
using namespace std;
class student{
    int age;
    public:
    int marks;

};

int main(){
    student *s1= new student;
    (*s1).marks=5;
    cout<<(*s1).marks;//s1->marks;
}
/*SIDD462
*/
