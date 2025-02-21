#include <stdio.h>
int main()
{
    // KKK foi assim que foi criada a tabuada kkkkk
    int a = 1;
    while (a <= 10)
    {
        int b = 1;
        while (b <= 10)
        {
            printf("%d\t", a * b);
            b++;
        }
        printf("\n");
        a++;
    }
    return 0;
}