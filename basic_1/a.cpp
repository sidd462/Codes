	#include<iostream>
#include<cmath>
#include<string>
#include <algorithm>
#include<vector>
using namespace std;
    
    int main()
    {
    string str="hello";
    int length=5;
    int i=0, j;
	string substr;
	for(j = 0; str[i] !='\0' && length > 0; i++, j ++)
		{
			substr[j] = str[i];
			length--;
		}
	substr[j] = '\0';        
    string temp=substr;
    cout<<temp;
    }