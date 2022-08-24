#include <bits/stdc++.h>
using namespace std;

class fraction{
private:
int numerator;
int denominator;
public:
fraction(int numerator,int denominator){
this->denominator=denominator;
this->numerator=numerator;
}
void print()
{
    cout<<numerator<<"/"<<denominator<<endl;//    cout<<this->numerator<<"/"<<this->denominator<<endl; same thing here as no confusion in parameter
}
void simplify(){
    int hcf=1;
    int j=min(numerator,denominator);//this-> can be written as well
    for(int i=1;i<=j;i++)
    {if(this->numerator%i==0 && this->denominator%i==0)
    hcf=i;
    }
    numerator=numerator/hcf;
    denominator=denominator/hcf;

}
void add(fraction f2)//f1=f1+f2
{
int lcm=this->denominator*f2.denominator;//int lcm=denominator*f2.denominator;
int x=lcm/denominator;
int y=lcm/f2.denominator;
int numerator_ans=x*numerator+(y*f2.numerator);
numerator=numerator_ans;//this->numerator=numerator_ans
denominator=lcm;//this->denominator=lcm
simplify();//this->simplify();
}
};

int main(){
    fraction f1(10,2);
  fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();

}
/*SIDD462
*/
