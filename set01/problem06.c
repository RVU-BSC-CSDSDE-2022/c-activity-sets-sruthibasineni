#include <stdio.h>
int input();
void compare (int a,int b,int c,int *largest);
void output (int a, int b, int c, int largest);

int main(){
 int a,b,c,largest;
 a = input();
 b = input();
 c = input();
 compare(a,b,c, &largest);
 output(a,b,c,largest);
}

int input () {
  int x;
  printf("Enter the number\n");
  scanf("%d",&x);
  return(x);
}

void compare(int a, int b, int c,int *largest){
  if(a>b)
  {
    if (a>c){*largest = a;}
    else{*largest = c;}
  }
  else 
  {
  if(b>c){*largest = b;}
      else{*largest = c;}
  }
}  

void output(int a,int b,int c,int largest){
  printf("the largest of %d,%d and %d is %d.",a,b,c,largest);
}
 