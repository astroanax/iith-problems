#include<stdio.h>
#include<stdlib.h>

void main(){
    short N;
    scanf("%hi", &N);

    short int *A[N];
    short int *A1[N];

    for(short i = 0; i<N; i++){
        A[i] = malloc(N*sizeof(short));
        A1[i] = malloc(N*sizeof(short));
        for(short j = 0; j<N; j++){
            scanf("%hi", &A[i][j]);
            A1[i][j]=0;
        }
    }

    short direction;
    scanf("%hi", &direction);
    printf("dir %d\n", direction);

    for(short i = 0; i<N; i++){
        for(short j = 0; j<N; j++){
            if(i==0){
                if(direction==1){
                    if(j==N-1){
                        A1[i+1][j]=A[i][j];
                    }
                    else{
                        A1[i][j+1]=A[i][j];
                    }
                }
                else{
                    if(j==0){
                        A1[i+1][j]=A[i][j];
                    }
                    else{
                        A1[i][j-1]=A[i][j];
                    }
                }
            }
            
            else if(i==N-1){
                if(direction==1){
                    if(j==0){
                        A1[i-1][j]=A[i][j];
                    }
                    else{
                        A1[i][j-1]=A[i][j];
                    }
                }
                else{
                    if(j==N-1){
                        A1[i-1][j]=A[i][j];
                    }
                    else{
                        A1[i][j+1]=A[i][j];
                    }
                }
            }
            else if(j==0){
                if(direction==1){
                    A1[i-1][j]=A[i][j];
                }
                else{
                    A1[i+1][j]=A[i][j];
                }
            }
            else if(j==N-1){
                if(direction==1){
                    A1[i+1][j]=A[i][j];
                }
                else{
                    A1[i-1][j]=A[i][j];
                }
            }
            else{
                A1[i][j]=A[i][j];
            }
        }
    }

    for(short i = 0; i<N; i++){
        for(short j = 0; j<N; j++){
            printf("%d ", A1[i][j]);
        }
        printf("\n");
    }
}