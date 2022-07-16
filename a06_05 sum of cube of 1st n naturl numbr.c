#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, s=0;
    printf("Enter a number, you want the sum of cubes those 1st natural numbers\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s+=i*i*i;
    }
    printf("The sum of cubes of 1st %d natural numbers is %d.\n",n,s);
    getch();
    return 0;
}
