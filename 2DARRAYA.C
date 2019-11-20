#include<stdio.h>
#include<conio.h>

int main()
{
  int sum[3]= {0};
  float avg[4]={0};
  int col, row;
  int stu [3][4];

  clrscr();
  for(row=0; row<3; row++)
  {
   printf("Enter score of student %d \n" , row+1);
   for(col =0; col<4; col++){
   printf("Subject %d \n" , col+1);
   scanf("%d" ,&stu[row][col]);
   sum[row] = sum[row] + stu[row][col];

   }
   printf("The sum of degree for student %d = %d\n", row+1, sum[row]);


  }
  for (col =0; col<4; col++)
  { for (row = 0; row <3; row++){
  avg[col] = (avg[col] + stu[row][col]) ;
  }
  avg[col] = avg[col]/3;
  printf("The average of subject %d is %f\n" , col +1 , avg[col]);
  }

  getch();
  return 0;
}