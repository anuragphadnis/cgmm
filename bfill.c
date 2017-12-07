#include<stdio.h>
#include<graphics.h>
void bfill(int x,int y,int col,int bnd)
{
	if(getpixel(x,y)!=bnd&&getpixel(x,y)!=col)
	{
		putpixel(x,y,col);
		bfill(x+1,y+1,col,bnd);
		bfill(x-1,y+1,col,bnd);
		bfill(x-1,y-1,col,bnd);
		bfill(x+1,y-1,col,bnd);
		bfill(x,y-1,col,bnd);
		bfill(x,y+1,col,bnd);
		bfill(x-1,y,col,bnd);
		bfill(x,y+1,col,bnd);
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	printf("Anurag Phadnis\n EN16IT301025");
	setcolor(RED);
	rectangle(100,100,200,200);
	bfill(102,102,BLUE,RED);
	getch();
	closegraph();
}
