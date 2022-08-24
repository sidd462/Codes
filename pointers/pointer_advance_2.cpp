#include <iostream>
using namespace std;
class triangle{
   public:
    int l1,l2,l3;
};
int main()
{

triangle t1;
triangle *p=&t1;//https://www.udemy.com/course/datastructurescncpp/learn/lecture/23244920#content
//triangle t1;
//triangle *p;
//p=&t1

p->l1=5;
cout<<p->l1<<endl;
cout<<t1.l1;


}