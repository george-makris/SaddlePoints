#include <stdio.h>

short int array[3][3] = {1,2,3,4,5,6,7,8,9};

int main(){
    for(int row = 0; row < 3; row++){ //looping through the array
        for(int col = 0; col < 3; col++){
            printf(" %d ",array[row][col]);
        }
        printf("\n");
    }
    return 0;
}