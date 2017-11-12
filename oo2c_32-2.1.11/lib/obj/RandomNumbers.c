#include <RandomNumbers.d>
#include <__oo2c.h>
#include <setjmp.h>

void RandomNumbers__GetSeed(OOC_INT32 *seed) {
  register OOC_INT32 i0;

  i0 = RandomNumbers__z;
  *seed = i0;
  return;
  ;
}

void RandomNumbers__PutSeed(OOC_INT32 seed) {
  register OOC_INT32 i0,i1;

  i0 = seed;
  i0 = _mod(i0,2147483647);
  i1 = i0==0;
  if (i1) goto l3;
  RandomNumbers__z = i0;
  goto l4;
l3:
  RandomNumbers__z = 1;
l4:
  return;
  ;
}

static void RandomNumbers__NextRND(void) {
  register OOC_INT32 i0,i1;

  i0 = RandomNumbers__z;
  i0 = (16807*(_mod(i0,127773)))-(2836*(_div(i0,127773)));
  i1 = i0>0;
  if (i1) goto l3;
  RandomNumbers__z = (i0+2147483647);
  goto l4;
l3:
  RandomNumbers__z = i0;
l4:
  return;
  ;
}

OOC_INT32 RandomNumbers__RND(OOC_INT32 range) {
  register OOC_INT32 i0,i1;

  RandomNumbers__NextRND();
  i0 = RandomNumbers__z;
  i1 = range;
  return (_mod(i0,i1));
  ;
}

OOC_REAL32 RandomNumbers__Random(void) {
  register OOC_INT32 i0;

  RandomNumbers__NextRND();
  i0 = RandomNumbers__z;
  return (((OOC_REAL32)(i0-1))*4.6566128774142013E-10f);
  ;
}

void OOC_RandomNumbers_init(void) {

  RandomNumbers__z = 1;
  return;
  ;
}

void OOC_RandomNumbers_destroy(void) {
}

/* --- */
