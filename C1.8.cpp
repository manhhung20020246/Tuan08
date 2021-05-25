#include<iostream>
#include<cstring>
using namespace std;
void reverse(char a[])
{
int l = strlen(a);
char temp;
for(int i=0; i< l/2; i++)
{
temp = a[i];
a[i] = a[l-i-1];
a[l-i-1] = temp;
}
}
void delete_char(char a[], char c)
{
    int l = strlen(a);
    for(int i=0; i<l; i++)
    {
        if(a[i]==c)
        {
            for(int j=i; j<l; j++)
            {
                a[j] = a[j+1];
            }
            i--;
        }
    }
}
void pad_right(char a[], int n)
{
    int l = strlen(a);
    while(n-l>0){
        a[l] = '_';
        l++;
    }
}

void pad_left(char a[], int n)
{
    int l = strlen(a);
    while(n-l>0)
    {

    }
}
int main()
{
    char a[100];
    cin >> a;
    reverse(a);
    char c;
    cin >> c;
    delete_char(a, c);
    int n;
    cin >> n;
    pad_right(a, n);
    pad_right(a, n);
}


