#include <bits/stdc++.h>
using namespace std;
int i=-1;

int firstIndex(int input[], int size, int x) {
if(size==0)
    return -1;
i++;
if(input[0]==x)
{ 
	return i;
}

    firstIndex(input+1,size-1,x);

    

}


int main(){

}
/*SIDD462
*/