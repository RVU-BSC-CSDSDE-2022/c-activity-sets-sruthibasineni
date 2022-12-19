#include <stdio.h>
float squareroot(float n)
{
  float x=n;
  float y=1;
  float e=0.000001;
  while(x-y>e){
    x=(x+y)/2;
    y=n/x;
  }
  return x;
}
int main(){
int n;
printf("Enter the no.");
scanf("%d",&n);
printf("square root of %d is %f",n,squareroot(n));
getchar();
  }