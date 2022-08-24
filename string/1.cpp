//https://classroom.codingninjas.com/app/classroom/me/19151/content/380869/offering/5399330
#include <iostream>
using namespace std;

int main() {

	string* sp = new string;
	*sp = "def";
	cout << sp << endl;
	cout << *sp << endl;

	string s = "abc";
	//getline(cin, s); to get string with spaces as cin breaks input as spaces
	cout << s << endl;
	
	s = "defdef";
	cout << s[0] << endl;
	s[0] = 'a';
	string s1;
	s1 = "def";

	string s2 = s + s1;
	cout << s2 << endl;

	s += s1;

	cout << s1 << endl;
	cout << s << endl;

	cout << s.size() << endl;
	cout << s.substr(3) << endl;	 
	cout << s.substr(3, 3) << endl;	

	cout << s.find("def") << endl;

}
