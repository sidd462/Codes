#include <iostream>
using namespace std;
class book
{
    public:
        string title;
        string author;
        int pages;
    

};

int main()
{
    book book1;
    
    book1.title = "harry potter";
    book1.author = "jk rowling";
    book1.pages= 500;
    book book2;
    book2.title = "lords of the rings";
    book2.author = "tolkein";
    book2.pages= 700;

        cout<<book1.title<<"\n";
        cout<<book2.author;

 


}