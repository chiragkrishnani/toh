#include<stdio.h>
#include<conio.h>
void main()
{

    void move(int,int,int,int);
    int n;
    printf("How many disks=");
    scanf("%d",&n);
    move(n,1,3,2);
    getch();
}
void move(int n,int source,int destination,int auxillary)
{
    if(n>0)
    {
        move(n-1,source,auxillary,destination);
        printf("Move disk from %d to %d\n",source,destination);
        move(n-1,auxillary,destination,source);
    }
}
