// 
// Complex floating-point dot product
//

#include <complex.h>
#include "dotprod_internal.h"

#define X(name) LIQUID_CONCAT(dotprod_cccf,name)
#define TO float complex
#define TC float complex
#define TI float complex

#include "dotprod.c"
