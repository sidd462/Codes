#include <bits/stdc++.h>
using namespace std;

int main(){
int i=10;
int * p=&i;
int ** p2=&p;
cout<<&p<<endl;
cout<<p2;
cout<<" BOTH ARE SAME\n"<<endl;
cout<<&i<<endl;
cout<<*p2<<endl;
cout<<p<<" ADRESS OF I\n";
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<" printing i value\n";


}
/*SIDD462
*/
