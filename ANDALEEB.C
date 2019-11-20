#include<stdio.h>
#include<conio.h>
int main()


{
 int x=0 ,y=0;



 int max,min;

 printf("enter your numbers: \n");
 scanf("%d", &x);
 scanf("%d", &y);
 if(x>y){
  max=x;
  min=y;
 }
 else
  { max=y;
    min=x;

  }
  scanf("%d", &x);
  if(x>max){
  max =x;
  }
   else if(x<min)
   {
  min=x;
  }
  scanf("%d", &x);
  if(x>max)
  {
  max = x;}
  else if(x<min)
  { min=x;

  } scanf("%d",&x);
  if(x>max){ max=x;}
  else if(x<min) { min=x;}

  printf("max= %d min= %d\n", max, min);



  getch();
  return 0;


}
