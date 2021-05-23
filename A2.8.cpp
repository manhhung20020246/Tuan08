#include<iostream>
using namespace std;
int main()
{
	char a[4] = "abc";
	for (char* ap = a; (*ap) != '\0'; ap++) {           // du lieu kieu char kich thuoc 1byte
		cout << (void*)ap << " : " << (*ap) << endl;
	}

	int i[4] = { 4, 6, 7 ,8 };
	for (int* ip = i; (*ip) != '\0'; ip++) {
		cout << (void*)ip << " : " << (*ip) << endl;    //du lieu kieu int kich thuoc 4 bytes
	}
	double n[4] = { 4, 6, 7 ,8 };
		for (double* np = n; (*np) != '\0'; np++) {
			cout << (void*)np << " : " << (*np) << endl;    //du lieu kieu double kich thuoc 8bytes
		}
    double m[4] = { 4, 6, 7 ,8 };
		for (double* mp = m; (*mp) != '\0'; mp+=2) {        //8bytes
			cout << (void*)mp << " : " << (*mp) << endl;    //in 2 so cach nhau 2 o nho 4 7 4 7
		}
		return 0;

}
