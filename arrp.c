#include <stdio.h>

typedef signed char schar_type, *schar_pointer, (*fp)(void); // type alias

void print(int arr[5]);

int main(void) {
  int ia[11]; // ia: an array of int
  float *afp[17]; // afp: an array of pointers

  char str[11];
  for (unsigned int i = 0; i < 10; ++i) {
    str[i] = '0' + i;
  }
  str[10] = '\0';

  printf("str %s\n", str);

  unsigned int i = 0;
  unsigned int j = 0;
  int arr[3][5] = { // 3 row, 5 columns
    { 1, 2, 3, 4, 5 },
    { 6, 7, 8, 9, 10 },
    { 11, 12, 13, 14, 15}
  };

  print(arr[1]);

  int x = arr[2][1];
  printf("x = %d\n", x);
}

void print(int arr[5]) {
  for (unsigned int i = 0; i < 5; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
