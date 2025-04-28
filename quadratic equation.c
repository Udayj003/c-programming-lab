#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float r1, r2;
    int D;

    printf("Enter the values of a, b, c for ax^2 + bx + c = 0:\n");
    scanf("%d %d %d", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D == 0) {
        r1 = -b / (2.0 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r1);
    } else if (D > 0) {
        r1 = (-b + sqrt(D)) / (2.0 * a);
        r2 = (-b - sqrt(D)) / (2.0 * a);
        printf("Roots are real and unequal: %.2f and %.2f\n", r1, r2);
    } else {
        float realPart = -b / (2.0 * a);
        float imagPart = sqrt(-D) / (2.0 * a);
        printf("Roots are complex and imaginary:\n");
        printf("r1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("r2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
