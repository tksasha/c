#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
  int *array;

  /* TODO: why it works?! */
  if((array = calloc(0, sizeof(int))) == NULL) {
    return -1;
  }

  for(int i = 1; i <= SIZE; i++) {
    array[i] = i;
  }

  for(int i = 1; i <= SIZE; i++) {
    printf("%d\n", array[i]);
  }

  free(array);

  return 0;
}
