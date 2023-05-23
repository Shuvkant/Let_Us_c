#include<stdio.h>
int main(){
    int total_sticks=21, computer_picked, you_picked, total_sticks_left;
    printf("There are 21 sticks:\n You have to pick 1, 2, 3 or 4:\n");
    while(1){
        //player's turn 
    printf("Enter your value:");
    scanf("%d",&you_picked);


    //validate player's input 
    if(you_picked<1 || you_picked>4 || you_picked>total_sticks){
        printf("Invalid input:");
        continue;
    }
    total_sticks=total_sticks-you_picked;


    //check if player has lost
    if(total_sticks==0){
        printf("You picked the last matchstick, You lose\n");
        break;
    }
    printf("Total matchstick's left=%d\n",total_sticks);


    //computer's pick 
    computer_picked=(5-you_picked);
    printf("Computer picked :%d\n", computer_picked);
    total_sticks=total_sticks-computer_picked;
    
    printf("There are %d matchsticks available in the table:\n", total_sticks);
    }
    return 0;
    

}