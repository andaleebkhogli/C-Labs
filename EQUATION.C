#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
  double a=0,b=0,c=0, m=0;
  double bsqr, x1=0, x2=0;
  double img=0;



  clrscr();

 printf("Enter a : \n");
 scanf("%lf", &a);
 printf("Enter b :\n");
 scanf("%lf", &b);
 printf("Enter c :\n");
 scanf("%lf", &c);

  bsqr = b*b;

 m = (bsqr) -(4*a*c);
 printf("%lf\n", m);
 if(m == 0){

 x1 = x2 =(-b) / (2*a);
 printf(" square root equals zero \n");
 printf("x1= %lf, x2=%lf\n", x1,x2);
 }
 else
 {
 if (m < 0){
 x1= -b / (2*a);
 img = sqrt(- m)/(2*a);

 printf(" square root is negative number \n");
 printf("- %lf + %lf img", x1, img);
 }
 else // m>0
 {


 x1 = ((-b) +  sqrt (m)) / (2*a);
 x2 = ((-b) -  sqrt (m)) /(2*a);
 printf(" square root is a positive number \n");
 printf("x1 = %lf\n x2= %lf \n" ,x1, x2);

 }
 }


  getch();
  return 0;

}