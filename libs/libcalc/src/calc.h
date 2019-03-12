#ifndef _CALC_H 
#define _CALC_H

#ifndef _ERRORES_MATH
#define _ERRORES_MATH
enum errores {E_NO, E_SINTAXIS, E_MATH};
#endif

#define DECIMAL_DIGITS 15

// Solves a complex mathematical expression.
// Receives an ANS value to use when necessary (to future implementation)
// and an error flag, which is ensured to be E_NO when everything is okay,
// or E_SINTAXIS | E_MATH when it corresponds
double resolverExpresion(const char *expression, double ans, int *errorFlag);

void consoleCalc();

#endif