#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
for(i=00;i<=620;i=i+15){
for(j=0;j<=460;j=j+10){
	setcolor(10);
	line(660-i,0,660,j);
	setcolor(100);
	line(i,0,0,j);
	setcolor(1);
	line(0,j,660,j);
	setcolor(1110);
	line(i,0,i,660);
	delay(100);
	}
 }
for(i=00;i<=660;i=i+5){
for(j=0;j<=460;j=j+5){
	setcolor(0);
	line(660-i,0,660,i);
	line(i,0,0,i);
	line(0,i,660,i);
	line(i,0,i,660);
	delay(10);
 }
 }


getch();
closegraph();
}

