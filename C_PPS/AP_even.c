#include<stdio.h>

int
main() {
  int a, n, b;
  printf("Enter a number of terms to follow the EVEN sequence:- ");
  scanf("%d", & a);
  if (a % 2 == 0) {
    b = 2 * a;
    for (int i = 1; i <= b; i++) {
      if (i % 2 == 0) {
        printf("%d,", i);
      }
    }
  } else if (a % 2 != 0) {
    b = 2 * a + 1;
    for (int i = 1; i <= b; i++) {
      if (i % 2 == 0) {
        printf("%d,", i);
      }
    }

  }
}
