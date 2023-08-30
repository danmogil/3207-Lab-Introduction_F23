#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar(void) {
  int a = 97;
  int z = 122;
  return (char) ( rand()  % (z + 1 - a) + a );
}