#include<iostream>
using namespace std;
 int sum1(int a[],int target,int n)
 {
    
     for(int i=0; i<n;i++)
     {
         for(int j=1;j<n;j++)
         {
             if (target==a[i]+a[j])
             {
                 cout<<i<<"  "<<j;
                 return 3;
             }
             
         }
     }
     return 1;

 }
 int main()
 {    int b[5]={1,3,5,2,9};
     int taget=6;
  size_t n = sizeof(b) / sizeof(b[0]);                      //size_t is data type to store sizeof()value

    cout<<n<<endl;
         sum1(b,7,n);

 }