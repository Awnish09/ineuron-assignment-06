#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, s=0;
    printf("Enter a number, you want the sum of those 1st natural number\n");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        s+=i;
    }
    printf("The sum of 1st %d natural numbers is %d.\n",n,s);
    getch();
    return 0;
}
