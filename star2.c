#include<graphics.h>
#include<stdio.h>
void bham(int x1,int y1,int  x2,int y2)
{
		int dx=x2-x1;
		int dy=y2-y1,x,y;
		double p=2*dy-dx;
		x=x1;y=y1;
		int i=0;
		while(i<(4*dx))
		{
			putpixel(x,y,WHITE);
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
		
		printf("\nAnurag Phadnis EN16IT301025");
		initgraph(&gd,&gm,NULL);
		bham(50+50,50+10,50+40,50+40);//top to bottom left
		bham(50+50,50+10,50+60,50+40);//top to bottomright
		bham(50+20,50+25,50+80,50+25);//center left to center right
		bham(50+40,50+40,50+80,50+25);//center right to bottom left
		bham(50+60,50+40,50+20,50+25);//center left to bottom right

		line(50,10,40,50);//top to bottom left
		line(50,10,60,50);//top to bottomright
		line(30,25,70,25);//center left to center right
		line(40,50,70,25);//center right to bottom left
		line(60,50,30,25);//center left to bottom right
		getch();
		closegraph();
	return 0;
}
