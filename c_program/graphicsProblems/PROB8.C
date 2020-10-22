#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i,j,a,b;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
a = getmaxx() / 2;
b = getmaxy() / 2;
while (!kbhit()){
for(i=0;i<=b;i=i+1){
//random(8);
setcolor(1111);
circle(a,b,i);
delay(10);
}
for(i=0;i<=b;i=i+1){
//random(8);
setcolor(1);
circle(a,b,i);
delay(10);
}
for(i=0;i<=b;i=i+1){
//random(8);
setcolor(10);
circle(a,b,i);
delay(10);
}
for(i=0;i<=b;i=i+1){
//random(8);
setcolor(100);
circle(a,b,i);
delay(10);
for(i=0;i<=b;i=i+1){
//random(8);
setcolor(1);
circle(a,b,i);
delay(10);
}
for(i=0;i<=b-20;i=i+1){
//random(8);
setcolor(0);
circle(a,b,i);
delay(10);
}
}

}
getch();
closegraph();
}

