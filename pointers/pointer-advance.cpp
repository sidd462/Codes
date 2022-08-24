#include <iostream>
using namespace std;

int main()
{
    struct rectangle{
        int lenth;
        int breadth;
    };
    rectangle *p;//  rectangle *p = new rectangle
    p= new rectangle;//creat new rectangle structor location
    p->lenth=8;
    p->breadth=10;
    cout<<p->breadth;
    
    
}