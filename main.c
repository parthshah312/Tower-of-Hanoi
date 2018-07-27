#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    void tower(int n,char A,char B,char C);
    printf("\n\n\t\t\t\t TOWER OF HANOI\t\t\t\t\n\n");
    printf("NOTE :- 1. The first disk is termed as '1' while last disk is termed as 'n'th\n\n");
    printf("Enter no. of disks ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    getch();
}
void tower(int n,char A,char B,char C)
{
    if(n>0)
    {
        tower(n-1,A,C,B);
        printf("Move  %d disk from %c to %c\n",n,A,C);
        tower(n-1,B,A,C);
    }
}
