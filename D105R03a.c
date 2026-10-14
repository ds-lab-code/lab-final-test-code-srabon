//question-a: remove an existing string from the sorted list by searching it's value

#include <stdio.h>
#include<string.h>

int main(){

    int loc = -1, n = 5;
    char item[20];

   char str[10][20];

   //taking input from user
   printf("Enter String: ");
   for(int i=0; i<n; i++){
    scanf("%s", str[i]);
   }

   //printing the inputed value
   printf("Input String = ");
   for(int i=0; i<n; i++){
    printf("%s ", str[i]);
   }

   printf("\nEnter string to delete: ");
   scanf("%s", item);

   //findig the location for item
   for(int i=0; i<n; i++){
      if(strcmp(item, str[i]) == 0){
        loc = i;
        break;
      }
    }

    if(loc == -1){
        printf("Item not Found!!");
    } 
    else{

        //shifting 
        for(int i = loc; i < n-1; i++){
            strcpy(str[i], str[i+1]);
        }

        n = n - 1;

        //printing the array
        for(int i = 0; i < n; i++){
            printf("%s ", str[i]);
        }
    }

    return 0;
}