#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    printf("even");
    else if(a<0)
    printf("invalid input");
    else
    printf("odd");
    return 0;
}
