	#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
setcolor(1111);
line(89,9,549,469);
line(89,469,549,9);
line(89,239,549,239);
line(319,0,319,469);
setcolor(1011);
rectangle(89,9,549,469);/*since rediaus=230,center (319,239) , 319-230=89*/
for(i=0;i<=230;i+=10){
if(i%3==0){setcolor(100);
circle(319,239,i);
}
else{if(i%7==0){
setcolor(10);
circle(319,239,i);
}
else{
setcolor(01);
circle(319,239,i);
}
}
}
getch();
closegraph();
}

