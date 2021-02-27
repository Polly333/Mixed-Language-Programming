#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()

{
clrscr();

int a;

printf("Enter Number between 0 to 8:");
scanf("%d",&a);
asm mov ax,a //imp

asm mov bx,a

back:
asm cmp bx,1
asm je out
asm dec bx
asm mul bx
asm loop back

out:
asm mov a,ax



printf("\n Factorial is %d ",a);
getch();
}

