#include <bits/stdc++.h>
using namespace std;
class student{
    int age;
    const int roll;
    int &x;//age reference variable
public:
student(int r,int a):roll(r),age(a),x(this->age){
    //roll=r; wrong
}

};

int main(){
student s1(32,21);
}
/*SIDD462
*/