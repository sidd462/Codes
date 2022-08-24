#include <iostream>
using namespace std;
void print(int n){
    if(n==1)
        return ;
   print(n-1);
    cout<<n;
}
int factorial(int n) {
	cout << n << endl;
	if (n == 0) {
		return 1;
	}
	int smallOutput = factorial(n - 1);
	return n * smallOutput;
}

int main() {
	
	int output = factorial(4);
	cout << output << endl;
    

}