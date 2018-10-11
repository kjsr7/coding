#include<iostream>
using namespace std;
int main()
{
int a = 2;
const int* p = &a;
cout<<*p<<endl;
a  =3;
cout<<a<<endl;
}
