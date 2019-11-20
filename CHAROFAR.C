#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()

{    char arr[40];
	 int pos;  //position
	// int last; // akher char minus position of zero hydene

	 int i=0;
	 char ch;
	 clrscr();


	do {  ch=getch();
 //   for(pos =0; pos<39; pos++)
	  if(ch!=0)
	  { if (ch >32 && ch<127 && ch!=13)
	  {

   //  isprint(ch);
   //  if (i <39){
	 arr[i] = ch;
	 i++;
   //  pos++;
	 printf("%c",ch);
	  }
	  else
	  {if(ch == 13)
	  {gotoxy(7,7);
	   arr[i]=0;
	   printf("%s" ,arr);
	}
	else if ( ch ==8)
	{gotoxy(pos-1,1);
	 printf(" ");

		 gotoxy(pos-1,1);
	}
	   }


	 }
	 if(ch ==0)
	 {ch=getch();
	  switch(ch)

	  { case 77 :
	gotoxy(++pos,1);
	if(pos>strlen(arr))
	{ pos =1;
	gotoxy(pos ,1);
	}
	   break;

	   case 75 :
	   gotoxy(--pos,1);
	   if(pos<1)
	   { pos=strlen(arr);
	   gotoxy(pos,1);
	   }
	   break;

	   case 83:
	   break;


	   case 71 :
	   gotoxy(1,1);
	   break;

	   case 79 :
	   gotoxy(strlen(arr),1);
	   break;
	   }

	  }
  }
  while ( ch!= 27);




  return 0;
}