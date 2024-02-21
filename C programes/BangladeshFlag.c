#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int graphicsdriver;
	int graphicsmanager;
	graphicsdriver = DETECT;
	initgraph(&graphicsdriver, &graphicsmanager, "C:\\TURBOC3\\BGI");
	//GREEN RECTANGLE
	setcolor(GREEN);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(100, 100, 550, 350);
	floodfill(325,175, GREEN);
	//RED Circle
	setcolor(RED);
	setfillstyle(SOLID_FILL, RED);
	circle(325, 220, 75);
	floodfill(325, 175, RED);
	getch();
}
