#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_
#include <stdio.h>
#include <stdlib.h>
#define EPS 0.000000000000001
#define S21_NAN 0 / 0.L
#define N_INF -1.0 / 0.L
#define INF 1.0 / 0.L
#define PRECISION 1e-9
#define S21_INFINITY __builtin_huge_vall()
#define S21_MINUS_INFINITY -__builtin_huge_vall()
// #define S21_NAN __builtin_nanf("0x7fc00000")
#define S21_PI_6 0.52359877559829881565889309058547951
#define S21_PI_4 0.785398163397448309615660845819875721
#define S21_PI_3 1.04719755119659763131778618117095903
#define S21_PI_2 1.57079632679489661923132169163975144
#define S21_PI 3.14159265358979323846264338327950288
#define MIN_DEGREE -713
#define MAX_DEGREE 709.782712
#define M_PI12 (M_PI / 12.F)
#define M_PI6 (M_PI / 6.F)
#define M_PI2 (M_PI / 2.F)
#define M_E 2.71828182845904523536028747135266250        /* e              */
#define M_LOG2E 1.44269504088896340735992468100189214    /* log2(e)        */
#define M_LOG10E 0.434294481903251827651128918916605082  /* log10(e)       */
#define LN2 0.693147180559945309417232121458176568       /* loge(2)        */
#define LN10 2.30258509299404568401799145468436421       /* loge(10)       */
#define M_PI 3.14159265358979323846264338327950288       /* pi             */
#define M_PI_2 1.57079632679489661923132169163975144     /* pi/2           */
#define M_PI_4 0.785398163397448309615660845819875721    /* pi/4           */
#define M_1_PI 0.318309886183790671537767526745028724    /* 1/pi           */
#define M_2_PI 0.636619772367581343075535053490057448    /* 2/pi           */
#define M_2_SQRTPI 1.12837916709551257389615890312154517 /* 2/sqrt(pi)     */
#define M_SQRT2 1.41421356237309504880168872420969808    /* sqrt(2)        */
#define M_SQRT1_2 0.707106781186547524400844362104849039 /* 1/sqrt(2)      */

#define MAXFLOAT 0x1.fffffep+127f
#define SQRT3 ((float)1.732050807569)

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
static long double row(double x);

#endif  // SRC_S21_MATH_H_
