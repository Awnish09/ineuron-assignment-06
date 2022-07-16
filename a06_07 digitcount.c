#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i=0, s;
    printf("Enter a number, for which you to find how many digits are there.\n");
    scanf("%d",&n);
    s=n;
    while(n)
    {
        n/=10;
        i+=1;
    }
    printf("There are %d digits in %d.\n",i,s);
    getch();
    return 0;
}
