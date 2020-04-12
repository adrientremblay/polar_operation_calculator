#include <stdio.h>
#include <math.h>
#define PI 3.14159265

// Polar form complex number
struct polar {
  double mag; // magnitude component
  double ang; // angle component
};

// Rectangular form complex number
struct rect {
  double re; // real component 
  double im; // imaginary component 
};

struct rect polar_to_rect(struct polar polar_num) {
  double re = polar_num.mag * cos(polar_num.ang);
  double im = polar_num.mag * sin(polar_num.ang);
  
  struct rect rect_num = {re, im};
  return rect_num;
}

int main() {
  struct polar test_polar = {10, PI/3};
  struct rect converted = polar_to_rect(test_polar);
  printf("%f %f", converted.re, converted.im); 

  return 0;
}
