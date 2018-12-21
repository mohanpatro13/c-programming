#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],rev[100];
int i,j,k,l=0,n,space[10];
clrscr();
gets(str);
n=strlen(str);
k=0;
space[k]=-1;
for(i=0;i<n;i++)
{
	if(str[i]==' ')
	{
		space[++k]=i;
	       //	printf("\n%d",i);
	}
}
//printf("first:%d",space[0]);
for(i=k;i>=0;i--)
{
	//printf("\n%d",space[i]);
	for(j=(space[i]+1);str[j]!='\0'&&str[j]!=' ';j++)
	{
		rev[l++]=str[j];
	}
	rev[l++]=' ';
}
rev[l]='\0';
printf("\n%s",rev);
getch();
}