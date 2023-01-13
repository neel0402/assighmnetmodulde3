#include <stdio.h>

int fact(int m)
{
    if (m > 1)
    {
        return m * fact(m - 1);
    }
}
int main()
{
    int answer;
    answer = fact(6);
    printf("Answer=%d", answer);
    return 0;
}