#include<stdio.h>
   int main()
{	char s[3]="man";
	int i;
	for(i=0;s[i];i++)
	printf("%c%c%c%c",s[i],*(s+i),*(i+s),i[s]);
return 0;
}
