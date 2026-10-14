//question-a: remove an existing string from the sorted list by searching it's value

#include <stdio.h>
#include<string.h>

int main(){

    int loc = -1, n = 10;
    char item[20];

   char str[10][20] = {
        "Apple",
        "Banana",
        "Grape",
        "Guava",
        "Jackfruit",
        "Lemon",
        "Mango",
        "Orange",
        "Papaya",
        "Pineapple"
   };

   printf("Enter string to delete: ");
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