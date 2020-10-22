#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i,j,a,b,c1,c2;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");
a=getmaxx()-39;
b=getmaxy()-79;
for(i=00;i<=a;i=i+15)
     {	for(j=0;j<=b;j=j+10){
		if(i<=300)
			{if(j<=199){
			setcolor(01);
			line(i,0,i,200);
			line(0,j,300,j);
			}
			else{setcolor(100);
			line(i,200,i,b);
			line(0,j,300,j);
			}
		}
		else{if(j<200){
		setcolor(100);
		line(i,0,i,200);
		line(300,j,a,j);
		}
		else{setcolor(01);
		line(i,200,i,b);
		line(300,j,a,j);
		}
		}
	       /*	rectangle(300,200,i,b-j); */

	}

    }


getch();
closegraph();
}
