#include<stdio.h>
int main()
{
    extern int method(float);
    int x;
    x = method(3.14);
    printf("%dn", x);
    return 0;
}

int method(int aa)
{
    return (int)--aa;
}
