#include "test.h"

typedef struct
{
  int a, b;
  int[4] c;
} S;

int32_t getFirst(S*);

int main()
{
  S s;
  s.c[0] = 42;

  assertEquals(42, getFirst(&s));
  return 0;
}

