#include <iostream>
using namespace std;
class Book
{
    public:
        string title;
        string author;
   
        int pages;
        Book(string name){   //constructor which is always a functions
        cout<<name<<endl;
        }



};
int main()
{
  Book book1("Creating harry potter");
    
    book1.title = "harry potter";
    book1.author = "jk rowling";
    book1.pages= 500;
    
     

 Book book2("creating lords of the ring");
    book2.title = "lords of the rings";
    book2.author = "tolkein";
    book2.pages= 700;
   
}