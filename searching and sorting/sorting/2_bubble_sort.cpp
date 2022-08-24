#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{for(int j=0;j<n;j++){
    for(int i=0;i<n-1;i++)
        {   
            if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
        }
}

}
void print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main(){
int a[]={2,1,0,-2};
bubble_sort(a,4);
print_arr(a,4);
}
/*SIDD462
*/