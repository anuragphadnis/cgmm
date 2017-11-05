#include<graphics.h>
#include<stdio.h>
void bham(int x1,int y1,int  x2,int y2)
{
		int dx=x2-x1;
		int dy=y2-y1,x,y,i=0;
		double p=2*dy-dx;
		x=x1;
		y=y1;
		while(i<(4*dx))
		{
			putpixel(x,y,DARKGRAY);
			if(p<0)
			{
				x++;
				p+=2*dy;
			}
			else
			{
				x++;
				y++;
				p+=2*dy-2*dx;
			}
			i++;
		}

}
int main()
{
	int x1,x2,y1,y2,gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	printf("\nAnurag Phadnis EN16IT301025");
	setbkcolor(WHITE);
	setcolor(DARKGRAY);
	bham(50+150,50+110,50+140,50+140);//top to bottom left
	bham(50+150,50+110,50+160,50+140);//top to bottomright
	bham(50+120,50+125,50+180,50+125);//center left to center right
	bham(50+140,50+140,50+180,50+125);//center right to bottom left
	bham(50+160,50+140,50+120,50+125);//center left to bottom right

	line(150,110,140,150);//top to bottom left
	line(150,110,160,150);//top to bottomright
	line(130,125,170,125);//center left to center right
	line(140,150,170,125);//center right to bottom left
	line(160,150,130,125);//center left to bottom right
	getch();
	closegraph();
return 0;
}
