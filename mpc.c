#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int r,x0,y0;
	printf("\nAnurag Phadnis\nEnter radius and center\n");
	scanf("%d%d%d",&r,&x0,&y0);
	initgraph(&gd,&gm,NULL);
	int x=0,y=r;
	double p=5.0/4.0-r;
	while(x<y)
	{
		putpixel(x0+x,y0+y,WHITE);
		putpixel(x0+y,y0+x,WHITE);
		putpixel(x0+x,y0-y,WHITE);
		putpixel(x0-x,y0+y,WHITE);
		putpixel(x0+y,y0-x,WHITE);
		putpixel(x0-y,y0+x,WHITE);
		putpixel(x0-y,y0-x,WHITE);
		putpixel(x0-x,y0-y,WHITE);
		if(p<0)
		{
			x++;
			p+=2*x+1;
		}
		else
		{
			x++;
			y--;
			p+=2*x+1-2*y;
		}
	//	printf("%d %d\n",x,y);
	}
	getch();
	closegraph();
	return 0;
}
