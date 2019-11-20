#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  int num [5];
  int max=0, min=0;
  int i;
  //clrscr();
  // textattr(0x70);
  clrscr();
  for (i =0; i<5; i++)
  {
  printf("Enter your number %d \n",i+1);
   scanf("%d", &num[i]);

  }
   for (i =0; i<5; i++)

   {

   if(i==0)
   { max = num [0];
	 min = num [0];

   }
  else if (max< num[i])
  {
  max = num[i];
   }
  else if
  (min > num[i])
	{
	 min = num[i];
	}
  }
  printf ("max number is  %d\n" , max);
  printf ("min number is  %d" , min);
  getch();
  return 0;
}