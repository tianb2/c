#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size = printf("%s\n", "hello");

  if (size >= 0) {
    printf("%i chars printed\n", size); // 6, including  \n
    return EXIT_SUCCESS;
  }

  return EXIT_FAILURE;
}
