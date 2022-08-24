#include<iostream>
using namespace std;
bool check_sort(int a[], int n)
{
    if (n==0 or n==1)
    {
        return true;
    }
if(a[0]<a[1] and check_sort(a+1,n-1))//a+1 points at next place of array as in function parameter array is taken as pointer therefore array are automaticall called by reference
    {
        return true;
    }
    return false;

}
int main()
{
        int arr[]={1,2,3,4,5};
        int n= sizeof(arr)/sizeof(int);
        cout<<check_sort(arr,n);
    
}