#include<stdio.h>
int main()
{
char arr[]= "geeksforgeeks";
char *ptr= arr;

while(*ptr != '\0')
++*ptr++;
printf("%s %s", arr, ptr);
getchar();
return 0;
}

