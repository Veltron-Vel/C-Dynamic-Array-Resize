#include <stdio.h>
#include <stdlib.h>

int main()
{
    int initial_size = 10,i,number_of_new_elements;
    int *arr = malloc(initial_size*sizeof(int));

    for(i=0;i<initial_size;i++){
        arr[i] = 10; //Giving each element a value of 10
    }
    printf("Current array:\n");
    for(i=0;i<initial_size;i++){
        printf("%d\n",arr[i]);
    }

    printf("How many more elements do you want to add ?\n");
    scanf("%d",&number_of_new_elements);
    int new_size = initial_size + number_of_new_elements;

    int *new_arr = realloc(arr,new_size * sizeof(int));

    if(new_arr == NULL){
        printf("Allocation failed");
        return 0;
    }

    arr = new_arr;
    printf("Type the values of the added elements:\n");
    for(i=initial_size;i<new_size;i++){
        scanf("%d",&arr[i]);
    }
     printf("Resized array:\n");
     for(i=0;i<new_size;i++){
        printf("%d\n",arr[i]);
    }

    free(arr);

    return 0;

}
