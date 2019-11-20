#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NORMAL 0X07
#define HIGHLIGHT 0X70
void colourmenu( int row);
void removecolor(int row);
int main()

{

   int col, row, ch,flag=0;
   textattr(0x07);
   clrscr();
   textattr(0x07) ;

   gotoxy(7,7);
   printf("1.Add");
   gotoxy(7,8);
   printf("2.Edit");
   gotoxy(7,9);
   printf("3.New");
   gotoxy(7,10);
   printf("4.Display");
   gotoxy(7,11);
   printf("5.Exit");
   row = 7, col =7;

   gotoxy(col,row);

   do
   {
      ch = getch();
      if (ch == 0)
      {
	 ch=getch();
	 switch (ch)
	 {
	     case 72:
		row=row-1;
		if(row ==6)
		   row =11;
		colourmenu( row);
		//removecolor(row);
		gotoxy(col,row);
		break;

	     case 80:
	       row=row+1;
	       if (row >11)
		   row=7;
	       colourmenu( row);
	      // removecolor(row);
	       gotoxy(col, row);
	       break;
	 }
      }

      else if (ch == 13)
      {
	if (col == 7 && row ==7)
	{
	   gotoxy(15,7);
	   printf(" Add is pressed");
	   gotoxy(7,8);
	}
	else if (col == 7 && row ==8)
	{
	   gotoxy(15,8);
	   printf(" Edit is pressed");
	   gotoxy(7,9);
	}
	else if (row==9)
	{
	   gotoxy(15,9);
	   printf(" New is pressed");
	   gotoxy(7,10);
	}
	else if (row==10)
	{
	   gotoxy(15,10);
	   printf(" Display is pressed");
	   gotoxy(7,11);
	}
	else if (row==11)
	{
	   flag=1;
	}

      }
      else if(ch==27)
      {
	flag=1;
      }
   }
   while (flag==0);


  return 0;
}



   void colourmenu( int row)
   {
   clrscr();
   gotoxy(7,7);
   printf("1.Add");
   gotoxy(7,8);
   printf("2.Edit");
   gotoxy(7,9);
   printf("3.New");
   gotoxy(7,10);
   printf("4.Display");
   gotoxy(7,11);
   printf("5.Exit");

   textattr(0x63);
     switch(row){
	case 7:
	 gotoxy(7,7);
	 cprintf("1.Add");
	 textattr(0x07);
	 break;

	case 8:
	 gotoxy(7,8);
	 cprintf("2.Edit");
         textattr(0x07);
	 break;

	case 9:
	 gotoxy(7,9);
	 cprintf("3.New");
	 textattr(0x07);
	 break;

	case 10:
	 gotoxy(7,10);
	 cprintf("4.Display");
	 textattr(0x07);
	 break;

	case 11:
	 gotoxy(7,11);
	 cprintf("5.Exit");
         textattr(0x07);
	 break;

		 }


    }
    void removecolor(int row)
    {
    textbackground(LIGHTGRAY);
     switch(row){
	case 12:
	 gotoxy(7,7);
	 cprintf("1.Add");
	 break;

	case 13:
	 gotoxy(7,8);
	 cprintf("2.Edit");
	 break;

	case 14:
	 gotoxy(7,9);
	 cprintf("3.New");
	 break;

	case 15:
	 gotoxy(7,10);
	 cprintf("4.Display");
	 break;

	case 16:
	 gotoxy(7,11);
	 cprintf("5.Exit");
		 break;

		 }




	return;


	}