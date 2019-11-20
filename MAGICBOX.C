#include<stdio.h>
#include<conio.h>
int main() {
 int row, col,i, size, totalsize;
 clrscr();
 printf("Please enter your box size\n");
 scanf("%d", &size);
 totalsize = size *size;

 for (i=1; i<=totalsize; i++)
 {
	if (i==1)
	{
		row=1;
		col=(size+1)/2;
	}
	else
	{
	 if (((i-1)%size) == 0)
		{
		row = row+1;
		col =col;
		}//if

	 else
		 {
			row=row-1;
			col=col-1;
			if (row == 0) row = size;
			if (col == 0) col = size;

		 }
	 }//else

	 gotoxy(col*7,row*7);
	 printf("%d" , i);

 }
  getch();
return 0;
}

