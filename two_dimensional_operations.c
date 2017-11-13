#include<stdio.h>
#define size 3
void tran(int array_a[size][size],int array_b[size][size]){
    int i,j;
    int trans_a[size][size],trans_b[size][size];
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            trans_a[i][j]=array_a[j][i];
            trans_b[i][j]=array_b[j][i];
        }
    }
    printf("The transpose of two matricies are\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ",trans_a[i][j]);
        }
        printf("\t\t");
        for (j = 0; j < size; j++) {
            printf("%d ",trans_b[i][j]);
        }
        printf("\n");
    }

}
void add(int array_a[size][size],int array_b[size][size]){

}
void sub(int array_a[size][size],int array_b[size][size]){

}
void mul(int array_a[size][size],int array_b[size][size]){

}
void main (){
    int array_a[size][size],array_b[size][size],array_s[size][size];
    int i,j,k,n;
    printf("enter the elements of two 3*3 arrays \n");
    printf("enter nine elements of 1st array \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("array[%d][%d]: \n",i,j);
            scanf("%d",&array_a[i][j]);
        }
    }
3    printf("enter nine elements of 2nd array \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("array[%d][%d]: \n",i,j);
            scanf("%d",&array_b[i][j]);
        }
    }
    printf("the two arrays are: \n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ",array_a[i][j]);
        }
        printf("\t\t");
        for (j = 0; j < size; j++) {
            printf("%d ",array_b[i][j]);
        }
        printf("\n");
    }
    printf("Enter choice for operation\n");
    printf("1 for tranpose\n");
    printf("2 Addition\n");
    printf("3 subtraction\n");
    printf("4 for Multiplicaton\n");
    scanf("%d",&n);
    switch (n) {
        case 1:
            tran(array_a,array_b);
        break;
        case 2:
            add(array_a,array_b);
        break;
        case 3:
            sub(array_a,array_b);
        break;
        case 4:
            mul(array_a,array_b);
        break;
    }


}
