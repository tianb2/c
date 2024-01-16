#include <stdio.h>

void increment(void) {
  static unsigned int counter = 0;
  counter++;
  printf("%d ", counter);
}

int *get_pointer(int i) {
  const int j = i;
  /* static int k = j; */ // error
  static int k = 1;
  return &k;
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
  }
  printf("\n");

  int *p = get_pointer(2);
  printf("%p -> %d\n", p, *p);
  return 0;
}
