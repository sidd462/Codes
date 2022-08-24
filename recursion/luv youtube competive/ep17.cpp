//https://www.youtube.com/watch?v=d59iXqly5FY
#include<iostream>
using namespace std;
void func(int n)
{
    if(n==0) return;
    cout<<n<<endl;
    func(n-1);

}
void func1(int n)
{
    if(n==0) return;
    func1(n-1);
    cout<<n<<endl;

}
int factorial(int n)
{
    if(n==0 ) return 1;

    return factorial(n-1)*n;

}
int main()
{
    func(5);
    cout<<"\n";
    func1(5);
    cout<<"\n";
    cout<<factorial(4);

}