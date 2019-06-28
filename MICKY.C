#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,("C:\\TurboC3\\BGI"));
	x=getmaxx()/2;
	y=getmaxy()/2;
	setcolor(DARKGRAY);
	ellipse(x,y,145,187,150,160);//Head Left
	ellipse(x,y,65,115,150,160);//Head Upper
	ellipse(x,y,353,35,150,160);//Head Right
	arc((x/2)+35,(y/2)-30,356,270,60); //ear
	arc((x/2)+283,(y/2)-30,271,185,60); //ear
	ellipse(x-45,y-45,41,220,60,100);
	ellipse(x+45,y-45,320,137,60,100);
	ellipse(x-25,y-35,300,250,15,48);  //eye Left
	ellipse(x+25,y-35,290,240,15,48);  //eye Right
	ellipse(x,y+90,60,120,100,80);
	ellipse(x,y+125,60,72,100,120);
	ellipse(x,y+125,80,100,100,120);
	ellipse(x,y+125,108,120,100,120);
	ellipse(x,y+50,0,360,40,25); //nose
	ellipse(x,y-10,205,248,188,190); //jawline Right
	ellipse(x,y-10,292,335,188,190); //jawline Left
	ellipse(x,y-50,232,308,140,250); //chin
	ellipse(x+120,y+58,345,120,52,45); //dimple Right
	ellipse(x-120,y+58,55,200,52,45); //dimple Left
	ellipse(x,y-130,235,305,200,240); //smile
	ellipse(x,y-197,235,305,140,350); //mouth
	ellipse(x-25,y+148,20,126,40,20); //tounge
	ellipse(x+25,y+188,64,120,40,60); //tounge
	ellipse(x+92,y+90,10,80,30,40);
	ellipse(x-90,y+90,110,170,30,40);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(0,0,DARKGRAY);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x,y+138,DARKGRAY);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(x+45,y-45,DARKGRAY);
	setcolor(RED);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
	outtextxy(x-100,y+200,"Micky Mouse");

	getch();
	closegraph();
}