#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)//base case
    return 1;

    int  small=factorial(n-1);
    int big = n* small;

    return big;


}





int main()
{
    cout<<"Enter the number of which you want a factorial of\n";
    int n;
    cin>>n;
    cout<<factorial(n);
}