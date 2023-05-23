#include<stdio.h>
int main()
{
    int x_comp_x_axis, x_comp_y_axis, y_comp_y_axis,x_comp_origin, y_comp_origin, x_component, y_component;
    printf("Enter the x and y component:");
    scanf(" %d %d", &x_component, &y_component);
    if(x_component>0 && y_component==0){
        printf("This lies in x axis.");
    }
    else if(x_component==0 && y_component>0)
    {
        printf("This lies in y axis.");
    }
    else if(x_component==0 && y_component==0)
        printf("The point lies in origin.");
    else{
        printf("This point lies on xy plane:");
    }
return 0;
}