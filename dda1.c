#include<graphics.h>
#include<stdio.h>
int abs(int a)
{
	return a>=0?a:-a;
}
int rnd(double a)
{
	if(a-(int)(a)>=0.5)
		return ((int)a)+1;
	return (int)a;
}
void myline(int x1,int y1,int x2,int y2)
{
	double m;
	int flag=0;
	if(x1!=x2)
		 m=(double)abs(y2-y1)/(double)abs(x2-x1);
	else
		flag=1;
	//printf("%f",m);	
	int xn=x1,yn=y1;
	double yact=y1,xact=x1;
	while(xn!=x2&&yn!=y2)
	{
		putpixel(xn,yn,WHITE);
		if(flag==0)
		{
			if(m<1.0)
			{
				xact=xact+1.0;
				yact=(double)(yact+m);
			}
			if(m>1.0)
			{
				yact+=1.0;
				xact+=1/m;
			}
			if(m==1.0)
			{
				xact+=1.0;
				yact+=1.0;
			}
		}
		if(flag==1)
		{
			yact+=1.0;
		}
		yn=rnd(yact);
		xn=rnd(xact);
		printf("%d,%d\n",xn,yn);
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int x1,x2,y1,y2,xmin,xmax,ymin,ymax;
	x1=100,y1=200,x2=190,y2=100;
	printf("Enter x1 y1 x2 y2");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	myline(x1,y1,x2,y2);
	setcolor(RED);
	line(x1,y1,x2,y2);
	getch();
	closegraph();
	return 0;
}
