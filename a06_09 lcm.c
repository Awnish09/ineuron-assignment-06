#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, d=2, p=1,x, y, g=1;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a, &b);
    x=a;
    y=b;
    while(g=1)
    {
        if(a%d==0 && b%d==0)
        {
            a/=d;
            b/=d;
            p*=d;
        }
        else
        {
            if(a%d==0)
            {
                a/=d;
                p*=d;
            }
            if(b%d==0)
            {
                b/=d;
                p*=d;
            }
        }

        if(a%d==0 || b%d==0)
            continue;

        if(a%d!=0 && b%d!=0)
            d++;

        if(a==1 && b==1)
            break;
    }

    printf("LCM of %d and %d is %d.",x,y,p);

    getch();
    return 0;
}
