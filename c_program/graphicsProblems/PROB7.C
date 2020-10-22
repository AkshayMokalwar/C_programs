#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
setcolor(1111);
line(0,400,300,0);
line(300,0,600,400);
line(150,150,450,150);
setcolor(1);
line(0,405,305,0);
line(305,0,605,405);
line(155,155,455,155);
setcolor(1101);
line(0,410,310,0);
line(310,0,610,410);
line(160,160,460,160);
setcolor(10);
line(0,415,315,0);
line(315,0,615,415);
line(165,165,465,165);
getch();
closegraph();
}

