


#include <stdio.h>

int main() {

    int N, sum=0, i;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (i=2; i<N; i+=2) {
        printf("%d ",i);
    }

    return 0;
}
