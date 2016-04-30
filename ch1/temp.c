#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 3000 */
main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    /* Beware. Integer division truncates.
    (5 / 9) * (fahr-32) would evaluate to 0 for
    every Celsius value */
    celsius = (5.0/9.0) * (fahr-32.0) ;
    /* 3.0f means 3 characters wide with 0 decimals,
    6.1 means 6 characters wide with 1 decimal place */
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
