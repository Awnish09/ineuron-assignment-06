#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, s=0;
    printf("Enter a number to reverse it.\n");
    scanf("%d",&n);
    while(n)
    {
        s=s*10+n%10;
        n/=10;
    }

    printf("%d\n",s);
    getch();
    return 0;
}
