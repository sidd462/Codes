#include<iostream>
#include <stack> 
using namespace std;
 bool isvalid(char s[])
 {
    stack<char> s1;
        for ( int i=0; s[i]!='\0';i++)
          {  char ch=s[i];
                if(ch=='(')
                {
                    s1.push(ch);
                }
              else if(ch==')'){
                   if(s1.empty() or s1.top()!='('){//redo
                         return false;//redo
                    }
                    s1.pop();
                }
            }
            return s1.empty();
 }



int main()
{
    char s[100]="((()))";
    if(isvalid(s))
    {
        cout<<"yes";
        
    }
    else 
    cout<<"no";
    
}