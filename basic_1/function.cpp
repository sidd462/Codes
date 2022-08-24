#include <iostream>
using namespace std;

int add(int a,int b)
{
    int c=a+b;
    return c;
}

int main()
{
int n1=5,n2=6,sum;
sum=add(n1,n2);
cout<<sum;
}