// "Copyright [2022] <Novosibirsk School21. All rights reserved.>"

#include "./s21_math.h"
static long double row(double x) {
  long double b = 1;
  long double an;
  long double sum = 0;
  int n = 1;
  int g = 1;
  an = b = x;
  while (s21_fabs(an) > 0) {
    sum += an;
    g = -g;
    an = g * (b *= x) / ++n;
  }
  return sum;
}

int s21_abs(int x) {
  int res;
  return res = (x < 0) ? -x : x;
}

long double s21_fabs(double x) {
  double res;
  if (x == 0) return 0;
  if (x != x) return S21_NAN;
  if (x == S21_INFINITY || x == -S21_INFINITY) return S21_INFINITY;
  return res = (x < 0) ? -x : x;
}

long double s21_ceil(double x) {
  double a;
  if (x != x) return x;
  if (x == S21_INFINITY) {
    a = S21_INFINITY;
  } else if (x == S21_MINUS_INFINITY) {
    a = S21_MINUS_INFINITY;
  } else {
    a = s21_floor(x);
    double b = x / a;
    if (b > 1) {
      a = a + 1;
    }
    if (b < 1) {
      a = a + 1;
    }
    if (b == 1) {
      a = x;
    }
  }
  return a;
}

long double s21_floor(double x) {
  double b;
  if (x == S21_INFINITY) return S21_INFINITY;
  if (x == -S21_INFINITY) return -S21_INFINITY;
  if (x == 0) return 0;
  double y = x - (int)x;
  if (x > 0) {
    b = x - y;
    if (y == 0) {
      b = x;
    }
  }
  if (x < 0) {
    b = (int)x - 1;
    if (y == 0) {
      b = x;
    }
  }
  return b;
}

long double s21_sin(double x) {
  x = s21_fmod(x, 2 * M_PI);
  long double an = x;
  int n = 1;
  long double s = 0;
  if (x != x) {
    s = -S21_NAN;
  } else if (x == S21_INFINITY || x == -S21_INFINITY) {
    s = -S21_NAN;
  } else {
    while (s21_fabs(an) > EPS) {
      s = s + an;
      an *= -1 * x * x / ((2 * n) * (2 * n + 1));
      n++;
    }
  }
  return s;
}

long double s21_cos(double x) {
  x = s21_fmod(x, 2 * M_PI);
  int n = 1;
  long double s = 0.0;
  if (x != x) {
    s = -S21_NAN;
  } else if (x == S21_INFINITY || x == -S21_INFINITY) {
    s = -S21_NAN;
  } else {
    long double an = 1.0;
    while (s21_fabs(an) > EPS) {
      s = s + an;
      an *= -1 * x * x / ((2 * n - 1) * (2 * n));
      n++;
    }
  }
  return s;
}

long double s21_fmod(double x, double y) {
  if ((x == 0) & (y != 0 || y != S21_NAN)) return 0;
  if (x != x || y != y) return S21_NAN;
  if (y == S21_INFINITY || y == -S21_INFINITY) return x;
  double k = x / y;
  double n = (int)k;
  double z = x - n * y;
  return z;
}

long double s21_tan(double x) {
  double y = 0.0;
  if (x != x) {
    y = x;
  } else {
    if (s21_cos(x) == 0) {
      if (s21_sin(x) > 0) {
        y = S21_INFINITY;
      } else {
        if (s21_sin(x) < 0) {
          y = -S21_INFINITY;
        }
      }
    } else {
      y = s21_sin(x) / s21_cos(x);
    }
  }
  return y;
}

long double s21_atan(double x) {
  long double s;
  if (x != x) {
    s = -S21_NAN;
  } else if (x == S21_INFINITY) {
    s = S21_PI_2;
  } else if (x == S21_MINUS_INFINITY) {
    s = -S21_PI_2;
  } else {
    long double an, b;
    int n = 1;
    int flag = 0;
    int sign_negative = 0;
    if (x < 0) {
      sign_negative = 1;
      x *= -1;
    }
    if (x > 1) {
      x = 1 / x;
      flag = 1;
    }
    an = x;
    s = x;
    b = x;
    if (x != 1) {
      while (b > EPS) {
        ++n;
        an *= -x * x * (2 * n - 3) / (2 * n - 1);  // mackloren
        s += an;
        if (an < 0) {
          b *= -an;
        } else {
          b = an;
        }
      }
    } else {
      s = M_PI_4;
    }
    if (flag == 1) {
      s = S21_PI_2 - s;
    }
    if (sign_negative == 1) {
      s *= -1;
    }
  }
  return s;
}

long double s21_asin(double x) {
  double s;
  return s = s21_atan(x / s21_sqrt(1 - x * x));
}

long double s21_acos(double x) {
  long double y;
  if (x != x || x > 1.0 || x < -1.0) {
    y = S21_NAN;
  } else if (x == 1) {
    y = 0;
  } else if (x == -1) {
    y = S21_PI;
  } else {
    y = S21_PI_2 - s21_asin(x);
  }
  return y;
}

long double s21_log(double x) {
  if (x != x) return S21_NAN;
  if (x == 0.0) return -S21_INFINITY;
  if (x < 0.0) return S21_NAN;
  if (x == S21_INFINITY) return S21_INFINITY;
  if (x == -S21_INFINITY) return S21_NAN;
  long double res = 0.0;
  if (x > 2) {
    int n = 0;
    while (x > 1) {
      x /= 10;
      n++;
    }
    res = n * LN10 + row(x - 1);
  } else {
    x = x - 1;
    res = row(x);
  }
  return res;
}

long double s21_exp(double x) {
  if (x != x) return x;
  if (x == S21_INFINITY)
    return S21_INFINITY;
  else if (x == S21_MINUS_INFINITY)
    return 0;
  long double s = 1.0;
  long double an = 1;
  for (int i = 1; an >= 1e-16; i++) {
    an *= s21_fabs(x) / i;
    s += an;
  }
  return (x > 0) ? s : 1.0 / s;
}

long double s21_pow(double base, double exp) {
  long double number;
  if (base < 0) {
    if ((int)exp == exp) {
      if (exp > 0) {
        number = base;
        for (int i = 0; i < (int)exp - 1; i++) {
          number *= base;
        }
      } else if (exp == 0) {
        number = 1;
      } else {
        number = 1 / base;
        for (int i = 0; i < (int)exp * (-1) - 1; i++) {
          number /= base;
        }
      }
    } else {
      if (exp == -S21_INFINITY || exp == S21_INFINITY) {
        if (base * (-1) < 1) {
          number = 0;
        } else if (base * (-1) == 1) {
          number = 1;
        } else {
          if (exp == -S21_INFINITY) {
            number = 0;
          } else {
            number = S21_INFINITY;
          }
        }
      } else {
        number = -S21_NAN;
      }
    }
  } else if (base == 0) {
    if (exp == 0) {
      number = 1;
    }
    if (exp < 0) {
      number = S21_INFINITY;
    }
    if (exp > 0) {
      number = 0;
    }
  } else if (base == 1) {
    number = 1;
  } else {
    if ((int)exp == exp) {
      if (exp > 0) {
        number = base;
        for (int i = 0; i < (int)exp - 1; i++) {
          number *= base;
        }
      } else if (exp == 0) {
        number = 1;
      } else {
        number = 1 / base;
        for (int i = 0; i < (int)exp * (-1) - 1; i++) {
          number /= base;
        }
      }
    } else {
      number = s21_exp(exp * s21_log(base));
    }
  }
  return number;
}

long double s21_sqrt(double x) {
  long double res;
  if (x == S21_INFINITY || x == S21_MINUS_INFINITY) return x;
  if (x != x || x < 0) x = S21_NAN;
  return res = s21_exp(0.5 * s21_log(x));
}
