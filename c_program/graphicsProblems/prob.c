#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
setcolor(01);
rectangle(100,100,400,400);
setcolor(11);
rectangle(50,70,350,270);
setcolor(10);
circle(250,250,149);
getch();
closegraph();
}

