#include<stdio.h>
#define size 5

int array[size];

void enter_elements(){
    int i;
    printf("Enter 5 elements one by one \n\n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}
void display_elements(){
    int i;
    enter_elements();
    printf("\nElements of array are \n");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }

}
void display_rev(){
    int i;
    enter_elements();
    printf("\nElements of array are \n");
    for(i=size-1;i>=0;i--){
        printf("%d\t",array[i]);
    }

}
void search(){
    int i,element,flag=0;
    enter_elements();
    printf("\nenter element to be searched\n");
    scanf("%d",&element);
    for(i=0;i<size;i++){
        if(array[i]==element){
            printf("Element %d is at loaction %d\n",element,i+1);
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("element not found\ngv");
    }
}
void replace(){
    int i,element,replace,location,flag=0;
    enter_elements();
    printf("\nenter element to be replaced\n");
    scanf("%d",&element);
    for(i=0;i<size;i++){
        if(array[i]==element){
            location=i;
            printf("\nElement %d is at loaction %d\n",element,i+1);
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("element not found\n");
    }

    if(flag==1){
        printf("\nEnter number by which we replace\n");
        scanf("%d",&replace);
        array[location]=replace;
        printf("\nThe new array is :\n");
        for (i =0; i < size; i++) {
            printf("%d\t",array[i]);
        }
    }
    printf("\n");
}
void sort(){
    int temp,i,j;
    display_elements();
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\nNow the sorted array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d\t",array[i]);
    }
    printf("\n");
}
void del(){
    int element,location,i,flag=0;
    display_elements();
    printf("\nEnter the element to be deleted\n");
    scanf("%d",&element);
    for(i=0;i<size;i++){
        if(array[i]==element){
            location=i;
            printf("Element %d is at loaction %d\n",element,i+1);
            flag = 1;
            break;
        }
    }
    if (flag==1) {
        for(i=location;i<size-1;i++){
            array[i]=array[i+1];
        }
    }
    if(flag==0){
        printf("element not found\n");
    }
    printf("Array after deletion\n");
    for (i = 0;i < size-1;i++) {
        printf("%d\t",array[i]);
    }
    printf("\n");
}
int frequency_cal(int element){
    int i,j,flag=0,location=0,fr=0;
    for(i=0;i<size;i++){
        for(j=location;j<size;j++){
            if(array[i]==element){
                location=i;
                fr++;
                flag = 1;
                break;
            }
        }
    }

    if(flag==0){
        printf("element not found\n");
    }
    return fr;
}
void freq_element(){
    int element,fr;
    display_elements();
    printf("\nEnter the element\n");
    scanf("%d",&element);
    fr=frequency_cal(element);
    printf("Frequency of Element is : %d\n",fr);

    printf("\n");
}
void distinct(){
    int i,j;
    display_elements();
    puts("\nDistinct elements are:\n");
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]==array[j]){
                break;
            }

        }
        if(j==size){
            printf("%d\t",array[i]);
        }
    }
    printf("\n");
}
void freq_distinct(){
    int i,j;
    display_elements();
    puts("\nDistinct elements with Frequency are:\n");
    puts("Element: Frequency\n");
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]==array[j]){
                break;
            }

        }
        if(j==size){
            printf("%d      : %d\n",array[i],frequency_cal(array[i]));
        }
    }
    printf("\n");
}
void remove_dup(){

}
void sum(){
    int i,sum=0;
    display_elements();
    for (i = 0; i < size; i++) {
        sum+=array[i];
    }
    printf("\nsum = %d\n",sum);
}
void average(){
    int i;
    float average,sum;
    display_elements();
    for (i = 0; i < size; i++) {
        sum+=array[i];
    }
    average=sum/size;
    printf("\naverage = %f\n",average);
}
void minimum(){
    int i,min,temp;
    display_elements();
    min = array[0];
    for (i = 0; i < size; i++) {
        if (array[i]<min) {
            min = array[i];
        }
    }
    printf("\nminimum = %d\n",min);
}
void maximum(){
    int i,max,temp;
    display_elements();
    max = array[0];
    for (i = 0; i < size; i++) {
        if (array[i]>max) {
            max = array[i];
        }
    }
    printf("\nmaximum = %d\n",max);
}

void main(){
    int n;
    printf("Enter your choice:\n");
    printf("1 for Read elements of Array\n");
    printf("2 for Display elements in input order\n");
    printf("3 for Search a particular element\n");
    printf("4 for Repalce a particular element\n");
    printf("5 for Insert a missed element\n");
    printf("6 for Sort the array elements in any order\n");
    printf("7 for Insert a missed element after sorting\n");
    printf("8 for Delete a particular element\n");
    printf("9 for Frequency of a particular element\n");
    printf("10 for Display the Distinct element\n");
    printf("11 for Remove the Duplicate elements\n");
    printf("12 for Display the sum of all elements\n");
    printf("13 for Get the average of all elements\n");
    printf("14 for Diplay the Maximum value element\n");
    printf("15 for Diplay the Mniimum value element\n");
    scanf("%d",&n);
switch (n) {
        case 1:
            enter_elements();
        break;
        case 2:
            display_elements();
        break;
        case 3:
            display_rev();
        break;
        case 4:
            search();
        break;
        case 5:
            replace();
        break;
        case 6:
        break;
        case 7:
            sort();
        break;
        case 8:
            del();
        break;
        case 9:
            freq_element();
        break;
        case 10:
            distinct();
        break;
        case 11:
            freq_distinct();
        break;
        case 12:
        break;
        case 13:
        sum();
        break;
        case 14:
        average();
        break;
        case 15:
        minimum();
        break;
        case 16:
        maximum();
        break;
    }
}
