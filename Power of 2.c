#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if ((a & (a - 1)) == 0)
	{
        printf("%d is a power of 2.\n", a);
    } else
	{
        printf("%d is not a power of 2.\n", a);
    }

    return 0;
}
