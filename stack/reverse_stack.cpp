#include<iostream>
#include <stack> 
using namespace std;
void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<"\n";
        s.pop();

    }
}
void reverse(stack<int> s)
{


}

void reverse_recursion()
{

}
int main()
{
    stack<int> s1;
   for (int i=0;i<5;i++)
   {
    s1.push(i);
   }
    print(s1);
    
}
