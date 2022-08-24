/*int i;
int lastIndex(int input[], int size, int x) {
i=size-1;
    if(size==0)
    return -1;
if(input[i]==x)
    return i;
lastIndex( input,size-1,  x);

}*/
int lastIndex(int input[], int size, int x) {
//i=size-1;
    if(size==0)
    return -1;
if(input[size-1]==x)
    return size-1;
lastIndex( input,size-1,  x);

}