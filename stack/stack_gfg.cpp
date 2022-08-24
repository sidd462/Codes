#include<iostream>
#include <stack> 
using namespace std;
//lifo: last in first out
/*The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) 
*/


int main() {
    stack<int> s1;
    int sum=0;
   
    s1.push(21);
    s1.push(22);
    s1.push(24);
    s1.push(25);
       stack<int> s2=s1;
      
    s1.pop();
    s1.pop();
   int length=s1.size();
       cout<<"\nthe size of stack is "<<length<<endl;
    while (!s1.empty()) {
        cout << ' ' << s1.top();
        s1.pop();
    }
    
    cout<<"\n\n";
    cout<<"the sum of stack is ";
   
    while(!s2.empty())
    {
        sum=sum+s2.top();
        s2.pop();
    }
    cout<<sum;
}