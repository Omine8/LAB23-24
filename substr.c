#include<stdio.h>
#include<string.h>
int main()
{
char s[30];
printf("Enter the string : ");
scanf("%[^\n]s",s);
int l = strlen(s);
int sp,sl;
printf("Enter the starting position : ");
scanf("%d",&sp);
printf("Enter the length : ");
scanf("%d",&sl);
if(sp > l || sl > l || sp > sl)
{
printf("INVALID POSITION ENTRY\n");
return 0;
}
char subs[sl+1];
for(int i=0;i<sl;i++)
{
subs[i]=s[sp+i];
}
printf("The substring is : %s\n",subs);
}
