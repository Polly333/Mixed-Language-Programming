#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//header files needed
//LOGIC is the divide the numbers in array by 2 to find even or odd
void main()
{
     int arr[10],even[10],odd[10];//taking equal sized arrays as we don't know how many even and odd will be there
     int no;
     char rem, dv=2;//for storing and dividing,why char ???
     int i,j=0,k=0,l1,l2;
     clrscr();
     printf("Enter the array elements:");

     for (i=0;i<10;i++)
     {
     scanf("%d",&arr[i]);//storing values in array
     }
//INLINE ASSEMBLY PROGRAM
//no semicolon
     asm lea si,arr //storing base address of array arr in si
     asm mov cx,0AH //Cx->counter,value = 0AH i.e.10 in decimal
back:
     asm mov ax,[si]//stores array element in ax register
     asm mov no,ax //stores the number in ax in no variable
     asm mov bl,dv //moves the value in dv(i.e.2)to bl register
     asm div bl  //this divides ax by bl
     asm mov rem,ah //after division ah contains the remainder

     if (rem == 1)
     {
	odd[j]=no;
	j++;
	l1=j; //to get number of eles in odd array
     }
     else
     {
     even[k]=no;
     k++;
     l2=k;
     }

     asm inc si//we incremented si twice because in C integer is of 4 bytes
     asm inc si
     asm dec cx //decrement counterby 1
     asm jnz back //if CX is not 0 then it again loops through loop name -> return

     printf("\nEven Array:");
     for(i=0;i<l2;i++)
     {
     printf("%d\t",even[i]);
     }
     printf("\nOdd Array:");
     for(i=0;i<l1;i++)
     {
     printf("%d\t",odd[i]);
     }


 getch();
 }
