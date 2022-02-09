#include <stdio.h>

short int array[3][3] = {1,20,3,4,50,6,7,8,9};
short int lcol_pos[3];
short int srow_pos[3];

int lcol, srow = 0; // defining coordinates of 

int main(){
    // finding the largest number per row
    for(int row = 0; row < 3; row++){ //looping through the array
        for(int col = 1; col < 3; col++){
            if(array[row][col] > array[row][lcol]){
                lcol = col;
            }
        }
        lcol_pos[row] = array[row][lcol];
    }
    //checking for which positions in the rows have are equal to the largest number
    for(int row = 0; row < 3; row++){
        printf("%d ",lcol_pos[row]);
    }
    printf("\n");
    return 0;
}