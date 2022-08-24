#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;
    ;
/*
    for(int i=0;i<5;i++)
    {
        vector<int> temp;
        for(int j=0;j<4;j++)
        {int t;
        
        cin>>t;
        temp.push_back(t);
            
        }
       v.push_back(temp);
    }

        for(int i=0;i<5;i++)
    {
        
        for(int j=0;j<4;j++)
        {
        
            cout<<v[i][j]<<" ";
        
            
        }
       cout<<endl;
    }
*/
    //method 2  very important
cout<<"\n\n";
for(int i=0;i<5;i++)
    {
    v.push_back(vector<int> ());//empty vector pushed at ith position
        for(int j=0;j<4;j++)
        {int t;
        
        cin>>t;
        v[i].push_back(t);
            
        }
       
    }
      for(int i=0;i<5;i++)
    {
        
        for(int j=0;j<4;j++)
        {
        
            cout<<v[i][j]<<" ";
        
            
        }
       cout<<endl;
    }


}