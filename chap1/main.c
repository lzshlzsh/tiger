#include <stdio.h>
#include "util.h"
#include "slp.h"
#include "prog1.h"

int maxargs(A_stm stm) {
  switch (stm->kind) {
    case A_compoundStm: {
      break;
    }
    case A_assignStm: {
      break;
    }
    case A_printStm: {
      break;
    }
  }
  return 0;
}


int main() {
  printf("maxargs(prog)=%d\n", maxargs(prog()));
  return 0;
}
