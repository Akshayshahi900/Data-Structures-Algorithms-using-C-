#include <stdio.h>
#include <math.h>
int main()
{
    int x, i, j, digits = 0, rem, n, newno = 0;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    // calculating no of digits
    n = x;
    int z =x;
    while (x != 0)
    {
        x = x / 10;
        digits++;
    }
    // printing digits
    printf("The no of digits %d\n", digits);

    // while (n != 0)
    // {
    //     rem = n % 10;
    //     newno = newno * 10 + rem;
    //     n = n / 10;
    // }
    // printf("%d\n\n", newno);
    // while (newno != 0)
    // {
    //     rem = newno % 10;
    //     printf("%d\t", rem);
    //     newno = newno / 10;
    // }
    while(z!=0 && digits!=0){
        z= z % (int)pow(10,digits);
        printf("%d\n",z);
        digits--;
    }

    return 0;
}
