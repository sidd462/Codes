#include<iostream>
using namespace std;
  void print_num(int n)
  {
      if(n==0)
      return;
      print_num(n-1);
      cout<<n<<endl;


  }
  int main()
  {int x;

  cout<<"Enter the amximum no you want to print\n";
  cin>>x;
  cout<<"\n";
  
      print_num(x);
  }