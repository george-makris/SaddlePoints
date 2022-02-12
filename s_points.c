#include <stdio.h>

short int array[3][3] = {9,8,7,5,3,2,6,6,7};
short int lcol_pos[3];
short int srow_pos[3];

int lcol, srow = 0; // defining coordinates of 

int main(){
    // finding the largest number per row
    for(int row = 0; row < 3; row++){ //looping through the array
        for(int col = 0; col < 3; col++){
            if(array[row][col] >= array[row][lcol]){ //finding largest col per row
                lcol = col;
            }
            if(array[col][row] <= array[srow][row]){ //finding smallest row per col
                srow = col;
            }
        }
        lcol_pos[row] = lcol; // saving corrdinates
        srow_pos[row] = srow;
        lcol = 0; // reseting coordinates for next iteration
        srow = 0;
    }
    //identifying saddle points from coordinates
    for(int i = 0; i < 3; i++){
        if(srow_pos[lcol_pos[i]] == i){
            printf("SP is %d\n",array[srow_pos[i]][lcol_pos[i]]);
        }
    }
    return 0;
}