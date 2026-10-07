// A program to find the correct loc among a sorted string and push a new value in it's correct position to

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
   
    char names[10][20];
    int n=5, loc=5;
    char item[20], temp[20];

    printf("Enter String: ");
    for(int i = 0; i < 5; i++){
        scanf("%s", names[i]);
    }

     // Bubble Sort
    for(int j = 1; j <n; j++){

        for(int i = 0; i < n - j; i++){

            if(strcmp(names[i], names[i + 1]) > 0){

                strcpy(temp, names[i]);
                strcpy(names[i], names[i + 1]);
                strcpy(names[i + 1], temp);
            }

        }
    }

    printf("\nSorted Value: \n");
    for(int i = 0; i < n; i++){
    printf("\nnames[%d]= %s ", i, names[i]);
    }

   printf("\nEnter New String to Push: ");
    scanf("%s", item);

    for(int i=0; i<5; i++){

        if(strcmp(names[i], item) > 0){
            loc = i;
            break;
        }
        
        else if(strcmp(names[i], item) == 0){
            loc = i+1;
            break;
        }

    }

    // Shifting
    for (int i = n; i > loc; i--) {
        strcpy(names[i], names[i - 1]);
    }

    // Inserting
    strcpy(names[loc], item);

    n++;

    // Printing
    for (int i = 0; i < n; i++) {
        printf("\nnames[%d]= %s ", i, names[i]);
    }

    
    return 0;

}
