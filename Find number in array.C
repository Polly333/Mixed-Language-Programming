#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int arr[10];
int i,num;
clrscr();
printf("\n Enter 10 Array Elements:");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}

printf("\n Enter a number to find: ");
scanf("%d",&num);


asm lea si,arr
asm mov ax,num
asm mov cx,0AH
Back:
asm cmp ax,[si]
asm je result
asm inc si
asm inc si
asm loop Back
asm jmp res //Without condn


result:
printf("Number Found");
goto end;

res:
printf("Number not found");
goto end;
end:
getch();
}
