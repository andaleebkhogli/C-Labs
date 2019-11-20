 #include<stdio.h>
 #include<conio.h>
 #include<ctype.h>
 #define right 77
 #define left 75
 #define home 71
 #define end 79
 #define enter 13
 #define esc 27
 #define backspace 8

 void main()
 {
  char line[40] , *pcurrent, *plast, ch;
  int start, current, last;
  int x;
  int exitF=0;
  clrscr()
  ;

  pcurrent =plast = line;
  start = current = last = 15;

  textattr(0x42);
  for(x=0; x<10; x++)
  {
   gotoxy(start+x,8);
   cprintf(" ");
  }
  do
  {
	gotoxy(current, 8);
	ch =getch();
	switch (ch)
	{
		case NULL:
		ch=getch();

		switch(ch)
		{
		  case left:
		  if(pcurrent >line)
		  {pcurrent --; current--; }
		  break;

		  case right:
		  if(pcurrent <plast)
		  {pcurrent++; current++; }
		  break;

		  case home:
		  current =start;
		  pcurrent=line;
		  break;

		  case end:
		  pcurrent =plast;
		  current = last;
		  break;

		}
		 break;
		 case esc:
		 exitF=1;
		 break;

		 case enter:
		 *plast ='\0';
		 printf("\n the phrase is : %s" , line);
		 break;

		 default :
		 if(isprint(ch) && pcurrent-line<10)
		 {
		  *pcurrent = ch;
		  printf("%c", ch);
		  if (pcurrent == plast)
		  {
		   plast++;
		   last ++;
		  }
		   pcurrent ++;
		   current++;

		  }
	}


  }
  while (exitF==0);
  getch();




 }
