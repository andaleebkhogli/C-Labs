#include<stdio.h>
#include<conio.h>
int main()
{
  int numbsize, numb, max=0, min=0, i;
  clrscr();
  printf("Enter your numbers size :\n");
  scanf("%d", &numbsize);

  for(i=0; i<numbsize; i++)
 {
	scanf("%d", &numb);
	 if (i ==0 )
	 {
	  max=numb;
	  min=numb;
	 }
  if (numb >max)
   {
	  max = numb;
   }

  else if ( numb < min)
   {
	min = numb;
   }
 }
  printf("min is %d \n", min);
  printf("max is %d \n", max);

  getch();
  return 0;
}