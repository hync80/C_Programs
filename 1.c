/* WAP to reverse the contents of a dynamic array of n elements.*/
#include<stdio.h>

void makingArray(int array[],int  size){
    int i;
    printf("enter the elements in array: ");
    for(i = 0 ; i < size ; i++){
        scanf("%d" , &array[i]);
    }
}

void showArray(int array[], int size){
    int i;
    printf("Here is the array : ");
    for(i = 0 ; i < size ; i++){
        printf("%d ," , array[i]);
    }
}

void reverse(int array[], int size){
    int i ,j = size-1;
    for(i = 0 ; i < j ; i++){
              int temp ; 
              temp = array[i];
              array[i] = array[j];
              array[j] = temp;
              j--;
    }
}

int main(){
    int size;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    int array[size];

    makingArray( array,size);
    showArray(array, size);
    reverse(array,size);
    showArray(array ,size);

    return 0;

     
}