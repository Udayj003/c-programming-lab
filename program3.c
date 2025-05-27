#include <stdio.h>
void main() {
 int n, i, j, k;
 // Read the number of rows for the top half of the pattern
 printf("Enter the number of rows for the top half of the pattern: ");
 scanf("%d", &n);
 // Generate the top half of the pattern
 for (i = 1; i <= n; i++) {
 // Print spaces for alignment
 for (j = 1; j <= n - i; j++) {
 printf(" \t");
 }
 // Print increasing numbers
 for (k = 1; k <= i; k++) {
 printf("%d\t", k);
 }
 // Print decreasing numbers
 for (k = i - 1; k >= 1; k--) {
 printf("%d\t", k);
 }
 printf("\n");
 }
 // Generate the bottom half of the pattern
 for (i = n - 1; i >= 1; i--) {
 // Print spaces for alignment
 for (j = 1; j <= n - i; j++) {
 printf(" \t ");
 }
 // Print increasing numbers
 for (k = 1; k <= i; k++) {
 printf("%d\t", k);
 }
 // Print decreasing numbers
 for (k = i - 1; k >= 1; k--) {
 printf("%d\t", k);
 }
 printf("\n");
 }
 
}