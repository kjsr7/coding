#include<stdio.h>
int main()
{
int a  = 2;
char buf[100];
snprintf(buf, "the int is %d", a, 2);
cout<<buf<<endl;
}
