// https://www.youtube.com/watch?v=vLnPwxZdW4Y
#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "mike";
    string *pName = &name;
        cout<<pAge<<endl;
        cout<<*pAge<<endl;
        cout<<*&age<<endl<<endl;//important, basically * gets value at location of age and location of age is &age so *(&age).&age is location and * brings value


    
    cout<<"This the memory address of the variable \t"<<&age<<endl;
    


 
}
