#include<graphics.h>
#include<stdio.h>
int main()
{
	int x1,x2,y1,y2,gd=DETECT,gm,dx,dy,i,x,y;
	double p;
	initgraph(&gd,&gm,NULL);
	setbkcolor(WHITE);
	printf("\nAnurag Phadnis EN16IT301025\nEnter x1,y1,x2,y2");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	p=2*dy-dx;
	x=x1;y=y1;
	i=0;
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
	getch();
	closegraph();
	return 0;
}