#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n) {
	for(int i = 1; i < n; i++) {
		int curr = a[i];
		int j;
		for(j = i - 1; j >= 0; j--) {
			if(curr < a[j]) {
				a[j+1] = a[j];
			}
			else {
				break;
			}
		}
		a[j+1] = curr;
	}

}

void printArray(int input[], int n) {
	for(int i = 0; i < n; i++) {
		cout << input[i] << " " ;
	}
	cout << endl;
}

int main() {
	// Take array input from the user
	int n;
	cin >> n;

	int input[100];
	
	for(int i = 0; i < n; i++) {
		cin >> input[i];
	}
	
	insertionSort(input, n);

	printArray(input, n);
	
}