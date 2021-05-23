#include<iostream>
using namespace std;
int main() {
    char** s = new char*[100];
	char foo[] = "Hello World";
	*s = foo;
	cout << "s is " << &s << endl;
	s[0][0]= foo[0];
	cout << &s[0][0];
	return(0);
}
