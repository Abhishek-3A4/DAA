#include <stdio.h>
void main()
{
    int a, b; 
    printf("Enter-two integer numbers: ");
    scanf ("%d %d", &a, &b);
    while (b > 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    printf ("GCD = %d \n",a);
}
