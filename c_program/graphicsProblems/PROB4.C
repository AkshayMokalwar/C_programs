#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
for(i=00;i<=660;i=i+20)
     {  j=i;
	if(j<=480){
	setcolor(10);
	line(660-i,0,0,j);
      }
    }


getch();
closegraph();
}

