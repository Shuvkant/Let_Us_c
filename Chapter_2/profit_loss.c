#include<stdio.h>
#include<math.h>
int main()
{
    int x_center, y_center, radius, x_point, y_point, x, y, z;
    printf("Enter the x and y component of center and radius:");
    scanf("%d%d%d", &x_center, &y_center, &radius);
    printf("Enter the x and y coordinate of the point :");
    scanf("%d%d", &x_point, &y_point);
    x=pow(x_point-x_center,2);
    y=pow(y_point-y_center,2);
    z=sqrt(x+y);
    if(z>radius){
        printf("The point is outside the circle:");
    }
   else if (z==radius){
        printf("The point lies on the circumference:");
    }
    else if(z==0){
        printf("The point is center of the circle");
    }
    else{
        printf("The point lis inside the circle");
    }


return 0;
}