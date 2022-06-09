
#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle:  ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && c==a) printf("Equilateral Triangle");
    else if(a!=b && b!=c && c!=a)printf("Scalene Triangle");
    else printf("isoceles Triangle");
    return 0;
}