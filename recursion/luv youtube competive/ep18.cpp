//https://www.youtube.com/watch?v=uqkM91ePeTI
#include<iostream>
using namespace std;

//sum off array
int sum(int n, int a[])
{
    if (n==-1) return 0;

    return sum(n-1,a)+a[n];
}

//digit sum(n)=digit sum(n/10)+last digit
int d_sum(int n)
{
if(n==0) return 0;
return d_sum(n/10) + (n%10);


}

int main()
{
    int a[]={1,2,3};
    
    cout<<sum(2,a)<<endl;

    cout<<d_sum(1234);


}