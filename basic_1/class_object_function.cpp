#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa)
    {
            name=aName;
            major=aMajor;
            gpa=aGpa;
    }
        
            bool hasHonors() //function
            {
                if(gpa>=3.5){
                    return true;
                }
            
            return false;
            }
};
int main()
{
Student s1("Jim", "business", 2.4);
Student s2("pam", "art", 3.6);
cout<<s1.hasHonors();

}