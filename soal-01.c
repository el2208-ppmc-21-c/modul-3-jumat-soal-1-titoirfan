#include <stdio.h>
#include <stdlib.h>

void rotate(int degree, int matrix[3][3]){
    int temp, loop;
    loop=degree/90;
    for(int i=0; i<loop; i++){
        temp =  *(*(matrix + 0) + 0); 
        *(*(matrix + 0) + 0) = *(*(matrix + 2) + 0); 
        *(*(matrix + 2) + 0) = *(*(matrix + 2) + 2); 
        *(*(matrix + 2) + 2) = *(*(matrix + 0) + 2); 
        *(*(matrix + 0) + 2) = temp; 

        temp = *(*(matrix + 0) + 1); 
        *(*(matrix + 0) + 1) = *(*(matrix + 1) + 0); 
        *(*(matrix + 1) + 0) = *(*(matrix + 2) + 1);  
        *(*(matrix + 2) + 1) = *(*(matrix + 1) + 2); 
        *(*(matrix + 1) + 2) = temp; 
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void mirror_y(int matrix[3][3]){
    for(int i=0; i<3; i++){
        swap((*(matrix + i) + 0), (*(matrix + i) + 2));
    }
}

void mirror_x(int matrix[3][3]){
    for(int i=0; i<3; i++){
        swap((*(matrix + 0) + i), (*(matrix + 2) + i));
    }
}

int main(){
    int  matrix[3][3], temp, degree, deg;
    char c;
    printf("Masukkan input elemen matriks:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", (*(matrix + i) + j));
        }
    }
    printf("Masukkan sudut rotasi: ");
    scanf("%d", &degree);
    deg = degree;
    if(degree % 90 == 0){
        rotate(degree, matrix);
        printf("Masukkan sumbu mirror: ");
        scanf("%s", &c);
        if (c=='x'){
            mirror_x(matrix); 
        }
        else if (c=='y'){
            mirror_y(matrix); 
        } else{
            printf("Input sumbu mirror bukan x atau y!");
            return 0;
        }
        printf("Output matriks rotasi %d derajat dan mirror sumbu %c:\n", deg, c);
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d ", *(*(matrix + i) + j));
            }
            printf("\n");
        }
    } else{
        printf("Sudut rotasi bukan kelipatan 90 derajat!\n");
    }
    return 0;
}
