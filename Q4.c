#include <stdio.h>
#include <float.h>

int main(void) {
 float k = 1;
 float x = 0.5;
 float s_old = 2.0;
 float s_new = 1.0*x;
 while (s_new != s_old && s_new != 1.0) {
  x = x/2.0;
  k = k+1;
  s_old = s_new;
  s_new = 1.0+x;
}
printf("%f\n",k);
printf("%f\n",x);
return 0;
}
