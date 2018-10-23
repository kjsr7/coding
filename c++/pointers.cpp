#include<bits/stdc++.h>
using namespace std;
int main()
{
/*int a = 2;
int *ptr = &a;
cout<<*ptr<<endl;
cout<<ptr<<" "<<&ptr<<endl;
int **ptr2 = &ptr;
cout<<*ptr2<<endl;
*/
const char*p = "12345";
cout<<p<<endl;
cout<<&p<<" "<<&p[0]<<endl;
const char**q = &p;
*q = "abcde";

}
