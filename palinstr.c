#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],temp;
printf("Enter the string : ");
scanf("%[^\n]s",s1);
int l = strlen(s1);
char stemp[30];
char cpy[l+1];
for(int i=0;i<l;i++)
{
cpy[i]=s1[i];
}

for(int i=0;i<l/2;i++)
{
temp=s1[i];
s1[i]=s1[l-i-1];
s1[l-i-1]=temp;
}

for(int i=0;i<l;i++)
{
if(cpy[i]!=s1[i])
{
printf("String is not a palindrome \n");
return 0;
}
}
printf("String is a palindrome\n");
}

