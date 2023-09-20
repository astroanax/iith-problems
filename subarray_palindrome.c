#include<stdio.h>
#include<stdlib.h>

void main(){
    // get array size
    short N;
    int palindromes = 0;
    scanf("%hi", &N);

    // input array elements
    unsigned int *A = malloc(N * sizeof(unsigned int));
    for(short i = 0; i<N; i++){
        scanf("%u", &A[i]);
    }

    // find subarrays
    int x;
    for(short i = 0; i<N; i++){
        for(short j=i+1; j<=N; j++){
            short is_palindrome=1;

            //start of subarray is i and end is j-1
            x = 0;
            for(int k=i; k<=(j-1 + i)/2 ; k++){
                if(A[k]!=A[j-1-x]){
                    is_palindrome=0;
                    break;
                }
                x++;
            }
            if(is_palindrome==1) palindromes+=1;
        }
    }

    printf("%d\n", palindromes);
}