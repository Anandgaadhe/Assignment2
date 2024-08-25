//WAP to find area of circle, rectangle and triangle 
#include <stdio.h>
int main() {
    int choice,;
    float radius, width, height, base, area;
    float pi=3.14
    // Display menu
    printf("\nEnter the shape to caculate the area = ");
    printf("\n1.circle");
    printf("\n2.Rectangle");
    printf("\n3.Triangle");
    printf("\nEnter your choice (1/2/3) = ");
    scanf("%d",&choice);

if(choice == 1 )
	{
			printf("\nEnter the radius of the circles = ");
			scanf("%d",&radius);
			area=pi*radius*radius;
			printf("\nThe area of circle is %2.f",area);
	}
else if (choice == 2 )
	{
			printf("\nEnter the width and height of rectangle = ");
			scanf("%f %f",&width,&height);
			area=width*height;
			printf("\nThe width and height of rectangle is %2.f",area);
	}
else if (choice == 3 )
	{
			printf("\nEnter the base and height of triangle = ");
			scanf("%f %f",&base,&height);
			area=0.5*base*height;
			printf("\nThe area of triangle  %2.f",area);
	}
else 
	{
			printf("\nInvalid Choich ! please select 1,2,or3");
	}
	

		
	    return 0;
	}

