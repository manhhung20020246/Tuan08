#include<iostream>
using namespace std;
/*void swap_pointers(char* x, char* y)
{
 char *tmp;
 tmp = x;
 x = y;
 y = tmp;
}
int main()
{
 char a[] = "I should print second";
 char b[] = "I should print first";
 char *s1 = a;
 char *s2 = b;
 swap_pointers(s1,s2);
 cout << "s1 is " << s1 << endl;
 cout << "s2 is " << s2 << endl;
 return 0;
} */ //chuong trinh van chay nhung khong swap do  chi thay doi dia chi chu khong thay doi gia tri
void swap_pointers(char** x, char** y)
{
	char *tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	char a[] = "I should print second";             //s1 is I should print first
                                                    //s2 is I should print second
                                                    //0x61fdd8
                                                    //0x61fe00 0x61fde0
	char b[] = "I should print first";
	char* s1 = a;
	char* s2 = b;
	swap_pointers(&s1, &s2);
	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;
	cout << &s1 << endl;
	cout << &a << " " << &b;
	return 0;
}
