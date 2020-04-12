#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265
#define MAXLEN 100

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
  printf("%f %f\n", converted.re, converted.im); 
  
  int c;
  int i = 0;
  int ps[MAXLEN]; // postfix string
  while ((c = getchar()) != EOF){
    if ('0' <= c && c <= '9'){
      if (ps != MAXLEN)
        ps[i++] = c; 
      else
        printf("Max expression length reached.  Exiting program...");
        exit(0);
    } 
  }
  return 0;
}
