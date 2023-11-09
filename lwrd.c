#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
printf("Enter the string : ");
scanf("%[^\n]s",a);
int l = strlen(a);
int wc=1;
for(int i=0;i<l;i++)
{
if(a[i]==' ')
{
wc++;
}
}
printf("Number of words in the string is : %d\n",wc);
char lw[wc+1];
int j=0;
for(int i=0;i<l;i++)
{
if(a[i+1]==' ' || i==(l-1))
{
lw[j]=a[i];
j++;
}
}
printf("Last words of the string is : %s\n",lw);
}
