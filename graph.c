#include<stdio.h>
#include<graphics.h>
#include<math.h>
main()
{
	float x,y,x1,y1,x2,y2,dx,dy,e;
	int i,gd,gm;
	
	
	printf("x1:\t");
	scanf("%f",&x1);
		printf("y1:\t");
	scanf("%f",&y2);
		printf("x2:\t");
	scanf("%f",&x2);
		printf("y2:\t");
	scanf("%f",&y2);
	
	detectgraph(&gd,&gm);
	
	initgraph(&gd,&gm,"");
	
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	x=x1;
	y=y1;
	
	e=2*dy-dx;
	
	i=1;
	do
	{
		putpixel(x,y,15);
		while(e>=0)
		{
			y=y+1;
			e=e-2*dx;
			
		}
		
		x=x+1;
		e=e+2*dy;
		i=i+1;
		
	}
	while(i<=dx);
	getch();
	closegraph();

}
