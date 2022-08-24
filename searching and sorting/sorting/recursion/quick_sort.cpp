#include <bits/stdc++.h>
using namespace std;

void swap1(int& a,int& b)
{int temp;
 temp=a;
 a=b;
 b=temp;
		    
}
int partition(int arr[],int s,int e)
{
    int part_pointer;
    int i=s-1;
for(int j=s;j<e;j++)
    {
        if(arr[j]<part_pointer)
        {
            i++;
            swap1(i,j);
        }
}
    int temp=i+1;
 swap1(temp,e);
 return i+1;
}
void quickSort1(int a[], int s, int e)
{
if(s<e){
    int p=partition(a,s,e);
    quickSort1(a,s,p-1);
    quickSort1(a,p+1,e);
}

}

void quickSort(int input[], int size) {


}

int main(){
}
/*SIDD462
*/