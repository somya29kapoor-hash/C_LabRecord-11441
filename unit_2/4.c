//declare variable of int,float,char,double,scanf/printf with formate specifers,swap number
#include <stdio.h>

int main()
{
    // Variable declaration
    int a, b, temp;
    float f;
    char ch;
    double d;

    // Input values
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);

    printf("Enter a float value: \n");
    scanf("%f", &f);

    printf("Enter a character: \n");
    scanf(" %c", &ch);   // space before %c to avoid newline issue

    printf("Enter a double value: \n");
    scanf("%lf", &d);

    // Display entered values
    printf("\nEntered Values:\n");
    printf("Integer a = %d\n", a);
    printf("Integer b = %d\n", b);
    printf("Float f = %.2f\n", f);
    printf("Character ch = %c\n", ch);
    printf("Double d = %.2lf\n", d);

    // Swapping two integers
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("\nAfter Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
