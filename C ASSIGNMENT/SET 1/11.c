#include <stdio.h>
#include <math.h>
typedef long double ld;
typedef long long int ll;

ld fibFormula(int n)
{
    ld a, b, c;
    a = (1 + pow(5, 0.5));
    b = (1 - pow(5, 0.5));
    c = 1 / pow(5, 0.5);
    ld d = a / 2;
    ld e = b / 2;
    ld fib = c * (pow(d, n) - pow(e, n));

    return floor(fib);
}

ld fib(int n)
{
    ld a = 0, b = 1, c;
    int i;
    if (n == 0)
    {
        return a;
    }
    for ( i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    ld fibFormulaResult = fibFormula(n);
    ld fibResult = fib(n);
    printf("Actual Fibonacci number: %0.0Lf \n", fibResult);
    printf("Fibonacci number using formula: %0.0Lf \n", fibFormulaResult);
    ld diff = fibFormulaResult - fibResult;
    if (diff < 0)
    {
        diff = -diff;
    }
    printf("Difference: %Le \n", diff);
    return 0;
}
