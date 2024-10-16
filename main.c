#include <stdio.h>
#include <math.h>
int main()
{
    int a , b , c;
    printf("enter the value of a and b : ");
    scanf("%d %d", &a,&b);
    c = sqrt((a * a) + (b * b));
    printf("the value of c is %d\n",c);
    return 0;

}
