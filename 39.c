#include<stdio.h>
main()
{
char a[100];
int c=0,i;
scanf("%[^\n]a",a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]<=' '))
{
c=c;
}
else{
c++;}
}
printf("%d",c);
}