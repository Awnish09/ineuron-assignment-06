#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, s=0;
    printf("Enter a number, you want the sum of those 1st odd natural numbers\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s+=2*i-1;
    }
    printf("The sum of 1st %d odd natural numbers is %d.\n",n,s);
    getch();
    return 0;
}
