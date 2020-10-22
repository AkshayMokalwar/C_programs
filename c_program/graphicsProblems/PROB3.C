#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j=0,a,b,k;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
for(k=100;k>10;k=k-2){
circle(300,240,k); }
a=getmaxx()-39;
b=getmaxy();
for(i=00;i<=a;i=i+3)
     {  if(j<=b){
	setcolor(10);
	line(a-i,0,0,j);
	setcolor(100);
	line(i,0,a,j);
	setcolor(1);
	line(0,j,i,b);
	setcolor(1110);
	line(i,b,a,b-j);
	j=j+2;
	}}


getch();
closegraph();
}

