#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "./s21_math.h"

START_TEST(s21_abs_1) {
  int a = -23256748;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST
START_TEST(s21_abs_2) {
  int a = -234;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST
START_TEST(s21_abs_3) {
  int a = 234;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

START_TEST(s21_acos_1) {
  double a = -0.56;
  ck_assert_float_eq(s21_acos(a), acos(a));
}
END_TEST
START_TEST(s21_acos_2) {
  double a = -0.97;
  ck_assert_float_eq(s21_acos(a), acos(a));
}
END_TEST
START_TEST(s21_acos_3) {
  double a = 0.5326;
  ck_assert_float_eq(s21_acos(a), acos(a));
}
END_TEST

START_TEST(s21_asin_1) {
  double a = -0.56;
  ck_assert_float_eq(s21_asin(a), asin(a));
}
END_TEST
START_TEST(s21_asin_2) {
  double a = 0.56;
  ck_assert_float_eq(s21_asin(a), asin(a));
}
END_TEST
START_TEST(s21_asin_3) {
  double a = -0.5876543;
  ck_assert_float_eq(s21_asin(a), asin(a));
}
END_TEST
START_TEST(s21_asin_4) {
  double a = -1;
  ck_assert_float_eq(s21_asin(a), asin(a));
}
END_TEST

START_TEST(s21_atan_1) {
  double a = 0;
  ck_assert_float_eq(s21_atan(a), atan(a));
}
END_TEST
START_TEST(s21_atan_2) {
  double a = -0.9876543;
  ck_assert_float_eq(s21_atan(a), atan(a));
}
END_TEST
START_TEST(s21_atan_3) {
  double a = 0.2882625451;
  ck_assert_float_eq(s21_atan(a), atan(a));
}
END_TEST
START_TEST(s21_atan_4) {
  double a = -1;
  ck_assert_float_eq(s21_atan(a), atan(a));
}
END_TEST

START_TEST(s21_ceil_1) {
  double a = S21_PI_4;
  ck_assert_float_eq(s21_ceil(a), ceil(a));
}
END_TEST
START_TEST(s21_ceil_2) {
  double a = -9876.987654321;
  ck_assert_float_eq(s21_ceil(a), ceil(a));
}
END_TEST
START_TEST(s21_ceil_3) {
  double a = 1.0002;
  ck_assert_float_eq(s21_ceil(a), ceil(a));
}
END_TEST
START_TEST(s21_ceil_4) {
  double a = -0.01;
  ck_assert_float_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(s21_cos_1) {
  double a = 0.0;
  ck_assert_float_eq(s21_cos(a), cos(a));
}
END_TEST
START_TEST(s21_cos_2) {
  double a = 0.01234567;
  ck_assert_float_eq(s21_cos(a), cos(a));
}
END_TEST
START_TEST(s21_cos_3) {
  double a = 1;
  ck_assert_float_eq(s21_cos(a), cos(a));
}
END_TEST

START_TEST(s21_exp_1) {
  double a = 0.0987654;
  ck_assert_float_eq(s21_exp(a), exp(a));
}
END_TEST
START_TEST(s21_exp_2) {
  double a = 0.0;
  ck_assert_float_eq(s21_exp(a), exp(a));
}
END_TEST
START_TEST(s21_exp_3) {
  double a = -0.987654;
  ck_assert_float_eq(s21_exp(a), exp(a));
}
END_TEST
START_TEST(s21_exp_4) {
  double a = 9.01;
  ck_assert_float_eq(s21_exp(a), exp(a));
}
END_TEST
START_TEST(s21_exp_5) {
  double a = 1;
  ck_assert_float_eq(s21_exp(a), exp(a));
}
END_TEST
START_TEST(s21_exp_6) {
  double a = 4.4;
  ck_assert_float_eq(s21_exp(a), exp(a));
}
END_TEST
START_TEST(s21_exp_7) {
  ck_assert_uint_eq(s21_exp(5), exp(5));
  ck_assert_uint_eq(s21_exp(-2), exp(-2));
  for (double i = -10; i < 10; i++) {
    ck_assert_uint_eq(s21_exp(i), exp(i));
  }
}
END_TEST

START_TEST(s21_fabs_1) {
  double a = -234.92;
  ck_assert_float_eq(s21_fabs(a), fabs(a));
}
END_TEST
START_TEST(s21_fabs_2) {
  double a = -233234.92;
  ck_assert_float_eq(s21_fabs(a), fabs(a));
}
END_TEST
START_TEST(s21_fabs_3) {
  double a = -234.9212345;
  ck_assert_float_eq(s21_fabs(a), fabs(a));
}
END_TEST
START_TEST(s21_fabs_4) {
  double a = -234.9;
  ck_assert_float_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(s21_floor_1) {
  double a = 1;
  ck_assert_float_eq(s21_floor(a), floor(a));
}
END_TEST
START_TEST(s21_floor_2) {
  double a = 1.0000000222332;
  ck_assert_float_eq(s21_floor(a), floor(a));
}
END_TEST
START_TEST(s21_floor_3) {
  double a = -87654.9876543;
  ck_assert_float_eq(s21_floor(a), floor(a));
}
END_TEST
START_TEST(s21_floor_4) {
  double a = 0.0;
  ck_assert_float_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(s21_fmod_1) {
  double a = 1.09876543002222;
  double b = -20;
  ck_assert_float_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST
START_TEST(s21_fmod_2) {
  double a = 92876543.0;
  double b = -0.99999;
  ck_assert_float_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST
START_TEST(s21_fmod_3) {
  double a = 0.0;
  double b = -1;
  ck_assert_float_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST
START_TEST(s21_fmod_4) {
  double a = M_PI;
  double b = 2;
  ck_assert_float_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST
START_TEST(s21_fmod_5) {
  double a = -0.9876543;
  double b = 0.1234567890;
  ck_assert_float_eq(s21_fmod(a, b), fmod(a, b));
}
END_TEST

START_TEST(s21_log_1) {
  double a = 1.0;
  ck_assert_float_eq(s21_log(a), log(a));
}
END_TEST
START_TEST(s21_log_2) {
  double a = 91.9876;
  ck_assert_float_eq(s21_log(a), log(a));
}
END_TEST

START_TEST(s21_pow_1) {
  double a = INF;
  double b = 2;
  ck_assert_float_eq(s21_pow(a, b), pow(a, b));
}
END_TEST
START_TEST(s21_pow_2) {
  double a = 92;
  double b = 0;
  ck_assert_float_eq(s21_pow(a, b), pow(a, b));
}
END_TEST
START_TEST(s21_pow_3) {
  double a = 0.9876;
  double b = 0.3;
  ck_assert_float_eq(s21_pow(a, b), pow(a, b));
}
END_TEST
START_TEST(s21_pow_4) {
  double a = -1;
  double b = INF;
  ck_assert_float_eq(s21_pow(a, b), pow(a, b));
}
END_TEST
START_TEST(s21_pow_5) {
  double a = -3;
  double b = -3.3;
  ck_assert_float_ne(s21_pow(a, b), pow(a, b));
}
END_TEST
START_TEST(s21_pow_6) {
  double a = 0;
  double b = -1;
  ck_assert_float_eq(s21_pow(a, b), pow(a, b));
}
END_TEST

START_TEST(s21_sin_1) {
  double a = 0.0;
  ck_assert_float_eq(s21_sin(a), sin(a));
}
END_TEST
START_TEST(s21_sin_2) {
  double a = -9.034;
  ck_assert_float_eq(s21_sin(a), sin(a));
}
END_TEST
START_TEST(s21_sin_3) {
  double a = 1.32039;
  ck_assert_float_eq(s21_sin(a), sin(a));
}
END_TEST
START_TEST(s21_sin_4) {
  double a = 1;
  ck_assert_float_eq(s21_sin(a), sin(a));
}
END_TEST

START_TEST(s21_sqrt_1) {
  double a = 0.34512;
  ck_assert_float_eq(s21_sqrt(a), sqrt(a));
}
END_TEST
START_TEST(s21_sqrt_2) {
  double a = 0.0;
  ck_assert_float_eq(s21_sqrt(a), sqrt(a));
}
END_TEST
START_TEST(s21_sqrt_3) {
  double a = 123;
  ck_assert_float_eq(s21_sqrt(a), sqrt(a));
}
END_TEST

START_TEST(s21_tan_1) {
  double a = 12345;
  ck_assert_float_eq(s21_tan(a), tan(a));
}
END_TEST
START_TEST(s21_tan_2) {
  double a = 1.098765;
  ck_assert_float_eq(s21_tan(a), tan(a));
}
END_TEST
START_TEST(s21_tan_3) {
  double a = -12345;
  ck_assert_float_eq(s21_tan(a), tan(a));
}
END_TEST
START_TEST(s21_tan_4) {
  double a = 0.0;
  ck_assert_float_eq(s21_tan(a), tan(a));
}
END_TEST
START_TEST(s21_tan_5) {
  double a = 0.3451234;
  ck_assert_float_eq(s21_tan(a), tan(a));
}
END_TEST

Suite *func_suite_create(void) {
  Suite *suite = suite_create("Test of s21_math");

  TCase *test_1 = tcase_create("test_1");

  suite_add_tcase(suite, test_1);

  tcase_add_test(test_1, s21_abs_1);
  tcase_add_test(test_1, s21_abs_2);
  tcase_add_test(test_1, s21_abs_3);

  tcase_add_test(test_1, s21_acos_1);
  tcase_add_test(test_1, s21_acos_2);
  tcase_add_test(test_1, s21_acos_3);

  tcase_add_test(test_1, s21_asin_1);
  tcase_add_test(test_1, s21_asin_2);
  tcase_add_test(test_1, s21_asin_3);
  tcase_add_test(test_1, s21_asin_4);

  tcase_add_test(test_1, s21_atan_1);
  tcase_add_test(test_1, s21_atan_2);
  tcase_add_test(test_1, s21_atan_3);
  tcase_add_test(test_1, s21_atan_4);

  tcase_add_test(test_1, s21_ceil_1);
  tcase_add_test(test_1, s21_ceil_2);
  tcase_add_test(test_1, s21_ceil_3);
  tcase_add_test(test_1, s21_ceil_4);

  tcase_add_test(test_1, s21_cos_1);
  tcase_add_test(test_1, s21_cos_2);
  tcase_add_test(test_1, s21_cos_3);

  tcase_add_test(test_1, s21_exp_1);
  tcase_add_test(test_1, s21_exp_2);
  tcase_add_test(test_1, s21_exp_3);
  tcase_add_test(test_1, s21_exp_4);
  tcase_add_test(test_1, s21_exp_5);
  tcase_add_test(test_1, s21_exp_6);
  tcase_add_test(test_1, s21_exp_7);

  tcase_add_test(test_1, s21_fabs_1);
  tcase_add_test(test_1, s21_fabs_2);
  tcase_add_test(test_1, s21_fabs_3);
  tcase_add_test(test_1, s21_fabs_4);

  tcase_add_test(test_1, s21_floor_1);
  tcase_add_test(test_1, s21_floor_2);
  tcase_add_test(test_1, s21_floor_3);
  tcase_add_test(test_1, s21_floor_4);

  tcase_add_test(test_1, s21_fmod_1);
  tcase_add_test(test_1, s21_fmod_2);
  tcase_add_test(test_1, s21_fmod_3);
  tcase_add_test(test_1, s21_fmod_4);
  tcase_add_test(test_1, s21_fmod_5);

  tcase_add_test(test_1, s21_log_1);
  tcase_add_test(test_1, s21_log_2);

  tcase_add_test(test_1, s21_pow_1);
  tcase_add_test(test_1, s21_pow_2);
  tcase_add_test(test_1, s21_pow_3);
  tcase_add_test(test_1, s21_pow_4);
  tcase_add_test(test_1, s21_pow_5);
  tcase_add_test(test_1, s21_pow_6);

  tcase_add_test(test_1, s21_sin_1);
  tcase_add_test(test_1, s21_sin_2);
  tcase_add_test(test_1, s21_sin_3);
  tcase_add_test(test_1, s21_sin_4);

  tcase_add_test(test_1, s21_sqrt_1);
  tcase_add_test(test_1, s21_sqrt_2);
  tcase_add_test(test_1, s21_sqrt_3);

  tcase_add_test(test_1, s21_tan_1);
  tcase_add_test(test_1, s21_tan_2);
  tcase_add_test(test_1, s21_tan_3);
  tcase_add_test(test_1, s21_tan_4);
  tcase_add_test(test_1, s21_tan_5);

  return suite;
}

int main(void) {
  Suite *suite_1 = func_suite_create();
  SRunner *suite_runner_1 = srunner_create(suite_1);

  int failed_count;

  srunner_run_all(suite_runner_1, CK_NORMAL);
  failed_count = srunner_ntests_failed(suite_runner_1);
  srunner_free(suite_runner_1);

  return failed_count == 0 ? 0 : 1;
}
