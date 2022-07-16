#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, s=1;
    printf("Enter a number, for which you to find the factorial.\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s*=i;
    }
    printf("The factorial of %d is %d.\n",n,s);
    getch();
    return 0;
}
