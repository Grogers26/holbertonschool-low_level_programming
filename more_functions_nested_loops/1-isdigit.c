#include "main.h"
#include <stdio.h>
/**
 *
 * isdigit - print the numbers 0 - 9
 *
 */
int isdigit(int c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}
