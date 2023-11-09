#include<stdio.h>
#include<string.h>
int main()
{
char s[30];
printf("Enter the string : ");
scanf("%[^\n]s",s);
int l = strlen(s);
int vc=0,wc=1,ch=0,con=0;
for(int i=0;i<l;i++)
{
if(s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i]== 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
{
vc++;
}
else
{
con++;
}
}
for(int i=0;i<l;i++)
{
if(s[i]==' ')
{
wc++;
}
else
{
ch++;
}
}
printf("Number of vowels : %d\n",vc);
printf("Number of consonants : %d\n",con);
printf("Number of characters : %d\n",ch);
printf("Number of words : %d\n",wc);
}

