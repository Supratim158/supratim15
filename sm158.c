#include<stdio.h>
void main()
{
    int a,b,r=0,t;
    printf("enter any number");
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        b=a%10;
        r=r*10+b;
        a=a/10;
    }
    if(t==r)
    printf("the number %d is pellindrome",t);
    else
    printf("the number %d is not pellindrome",t);
}
