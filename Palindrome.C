#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{

int nos[5],x,y;
clrscr();
printf("\n Enter 5 numbers:");

int i,j;

for(i=0;i<5;i++)
{

scanf("%d",&nos[i]);
}

for(i=0;i<2;i++)
{
for(j=4;j>2;j--)
{
x=nos[i];

y=nos[j];
_asm{

mov ax,x

mov bx,y
cmp ax,bx
jnz no
}

}
}
printf("\n Array is Palindrome.");
goto end;


no:
printf("\n Array is not palindrome.");
goto end;

end:

getch();

}

