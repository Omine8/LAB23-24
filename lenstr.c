#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
printf("Enter the string : ");
scanf("%[^\n]s",a);
int count=0;
int i=0;
while(a[i]!='\0')
{
count++;
i++;
}
int count1 = strlen(a);
printf("The length of the string using library function is : %d\n",count1);
printf("The length of the string without using library function is : %d\n",count);
}
