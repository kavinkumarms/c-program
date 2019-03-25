#include<stdio.h>

#include<string.h>

void main()

{
char a[20];

int i;

scanf("%s",a);

strrev(a);

for(i=0;a[i]1='\0';i++)

{
if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')

{
printf("%c",a[i]);

}

}
