#include <iostream>
using namespace std;
class Book
{
    public:
        string title;
        string author;
        int pages;
        
        Book(string A_tiltle, string A_author, int A_pages){   //constructor (which is always a functions) with all three parameter
        title=A_author;
        author=A_author;
        pages=A_pages;
        }

        Book()                  //constructor (which is always a functions) with no parameter                
        {
        cout<<"aaa";
        }


};
int main()
{
  Book book1("harry potter","jk rowling",500);
    
cout<<book1.title;

cout<<endl;


 Book book2("lords of the rings","tolkein",700);
cout<<book2.title<<endl<<endl;

Book book3;                     //using book() constructor without parameter one
book3.title="\n\nc++";
cout<<book3.title;
  
}