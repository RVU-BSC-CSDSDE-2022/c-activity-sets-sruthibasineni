#include<stdio.h>
struct _complex {
	float real;
  float  imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
  int n;
  Complex result={0,0};
  n=get_n();
  Complex c[n];
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  return 0;
}
int get_n()
{
  int n;
  printf("Enter the size of the array\n ");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex c;
  printf("enter the real part\n");
  scanf("%f",&c.real);
  printf("enter the imaginary part\n");
  scanf("%f",&c.imaginary);
  return c;
  }
void input_n_complex(int n, Complex c[n])
{
  for(int i=0;i<n;i++)
    {
      c[i] =input_complex();
    }
}

Complex add(Complex a, Complex b)
{
  a.real=a.real+b.real;
  a.imaginary=a.imaginary+b.imaginary;
  return a;
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex sum={0,0};
  for(int i=0;i<n;i++)
    {
      sum=add(sum,c[i]);
    }
}


void output(int n, Complex c[n], Complex result);
{
  
}
void output(int n, Complex c[n], Complex result)
{printf("the sum of %f+i%f + %f+i%f + %f+i%F is %f+i%f",a.real,b.real,a.imaginary,b.imaginary,sum.real,sum.imaginary);
  }