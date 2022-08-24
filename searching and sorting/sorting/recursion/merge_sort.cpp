#include <bits/stdc++.h>
using namespace std;
void merge_arr(int a1[], int a2[], int n1,
                             int n2, int a3[])
{
    int i = 0, j = 0, k = 0;
  
 
    while (i<n1 && j <n2)
    {

        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
    }
  
   
    while (i < n1)
        a3[k++] = a1[i++];
  

    while (j < n2)
        a3[k++] = a2[j++];
}
void merge(int *a , int si,int ei)
{
if(si>=ei)//ei==0 or ei==1
    return;
int mid=(si+ei)/2 ;
merge(a,si,mid);
merge(a,mid+1,ei);
int arr[ei+1];
merge_arr( a,  a+mid+1,  mid+1, ei-mid,  arr);

for(int i=0;i<ei;i++)
{
    a[i]=arr[i];
}


}

int main(){
int a[]={11,3,5};
merge(a,0,2);
cout<<a[0]<<a[1]<<a[2];
}
/*SIDD462
*/