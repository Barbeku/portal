#include <stdio.h>
#include <math.h>

#define toRad(n) (M_PI/180 * (n))

double ctg(double value){
  return 1/tan(value);
}

int main(){
  double leg1, leg2;
  double angle1, angle2;
  double x1, y1;
  double x2, y2;

//  printf("%lf\n", ctg(toRad(3)));
//  printf("%lf\n", cos(toRad(180)));
//  return 0;
//  return 0;

  printf("input the cords: \n");
  scanf("%lf %lf", &x1, &y1);

  printf("input the angle: \n");
  scanf("%lf", &angle1);

  printf("input the cords 2: \n");
  scanf("%lf %lf", &x2, &y2);

  printf("input the angle 2: \n");
  scanf("%lf", &angle2);
  
  leg1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  printf("%lf\n", angle1 - angle2);

  leg2 = leg1*ctg(toRad(angle1-angle2));

//  printf("%lf, %lf\n", leg1, leg2);

  printf("x: %lf\n", x1 + sin(toRad(angle1)) * leg2);
  printf("y: %lf\n", y1 + cos(toRad(angle1)) * leg2);

  return 0;
}

/*
220.519 311.626
18.7

155.3 288.545
15.7
*/
//-167.300 1495.518


