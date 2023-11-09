#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30];
printf("Enter the string to be concatenated : ");
scanf("%[^\n]s",s1);
printf("Enter the string to be induced : ");
scanf(" %[^\n]s",s2);
int l1 = strlen(s1);
int l2 = strlen(s2);
int loc;
printf("Enter the location for concatenation : ");
scanf("%d",&loc);
if(loc>l1)
{
printf("Location cannot be found\n");
return 0;
}
l1=l1+l2;
for(int i=0;i<l2;i++)
{
s1[loc+i]=s2[i];
}
printf("Final string is : %s\n",s1);
}
