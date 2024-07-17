#include <stdio.h>
int main()
{ // area of circle
   int r, ans, rsq, h, ans2;
   float pi = 3.14;
   scanf("%d", &r);
   rsq = r * r;
   ans = rsq * pi;
   scanf("%d", &h);
   ans2 = pi * rsq * h;
   printf(" the area of circle %d \n", ans);
   printf(" the volume of cylinder is %d \n", ans2);
   return 0;
}
