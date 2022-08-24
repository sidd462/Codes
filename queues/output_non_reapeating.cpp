#include <bits/stdc++.h>
using namespace std;

int main()
{   
queue<char> q;
int freq[27]={0}; //alphbet

char ch;
cin>>ch;
while(ch!='.')    
{
q.push(ch);
freq[ch-'a']++;//so if ch is b so b-a is 1 and freq[1] represent b

while(!q.empty())
{
    int idx=q.front() -'a';
    if(freq[idx]>1)
    {
        q.pop();
    }
    else{
        cout<<q.front()<<endl;
        break;
    }
}
if(q.empty()){
    cout<<"-1"<<endl;
}
    cin>>ch;
}

}