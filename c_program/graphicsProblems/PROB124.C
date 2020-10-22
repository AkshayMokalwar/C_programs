#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(void)
{int  gd=DETECT, gm,i,j;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
 for(i=0;i<=460;i=i+10)
 {      setcolor(10);
	rectangle(230,230,i,i);
	setcolor(100);
	rectangle(230,230,i,460-i);
 }
 getch();
 closegraph();
 }