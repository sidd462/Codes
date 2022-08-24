#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int start=0,end=n-1,mid;
    
        for(int i=0;i<n;i++)
        {
            mid=(start+end)/2;
            if(mid==-1 or mid==n) 
            return -1;

            if(a[mid]==x)
             return mid;
                else if(x>a[mid])
                    start=mid+1;
                else if(x<a[mid])
                    end=mid-1;
            
        }
        return 0;
}
int main(){
 int arr[]={5,7,8,10,20,30};
cout<<binary_search(arr,6,30);

}
/*SIDD462
*/