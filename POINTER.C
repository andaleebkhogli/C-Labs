#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void LineEditor(char *ptr, int size);
int main()

{
	  int *ptr, *ptr1;
	  int size;
	  clrscr();

	  printf("Enter your array size\n");
	  scanf("%d", &size);

	  if (ptr == NULL)
	  {
			printf("There's no memory allocation");
	  }
	  else
	  {
			ptr = (char*)malloc(size* sizeof(char));
			ptr1=ptr;
			LineEditor(ptr , size);
			//free(ptr);
			free(ptr);
	  }

	  return 0;
}


void LineEditor( char *ptr,int size)
{
	 // char arr[40];
	 int pos;  //position
	 // int last; // akher char minus position of zero hydene

	 int i=0, j;
	 char ch;

	 do
	 {
		ch=getch();
		//   for(pos =0; pos<39; pos++)
		if(ch!=0)  //Normal
		{
			if (ch >32 && ch<127 && ch!=13) //fill in array
			{
				//  isprint(ch);
				//  if (i <39){
				if((i+1)<=size)
				{
					ptr[i] = ch;
					i++;
					//  pos++;
					printf("%c",ch);
				}
			}
			else
			{
				if(ch == 13)
				{
					gotoxy(7,7);
					//ptr[i]=ch;

					for (j=0; j<size; j++)
					{
						printf("%c" ,*(ptr+j));
					}
				}
				else if ( ch ==8)
				{
					gotoxy(pos-1,1);
					printf(" ");

					gotoxy(pos-1,1);
				}
			}


		}
		if(ch ==0)   //exetended
		{
			ch=getch();
			switch(ch)

			{
				case 77 :
					gotoxy(++pos,1);
					if(pos>strlen(ptr))
					{
						pos =1;
						gotoxy(pos ,1);
					}
					break;

				case 75 :
					gotoxy(--pos,1);
					if(pos<1)
					{
						pos=strlen(ptr);
						gotoxy(pos,1);
					}
					break;

				case 83:

					break;


				case 71 :
					gotoxy(1,1);
					break;

				case 79 :
					gotoxy(strlen(ptr),1);
					break;
			}
		}
  } while ( ch!= 27);

}