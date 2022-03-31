#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
    
    srand((int)time(NULL));

    int i,j;
    int mt[N][M];
    int *pmt = &mt[0][0];


    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            *pmt = 1 + rand() % 100;
            printf("%d\t", *pmt);
            pmt++;
        }
        printf("\n");
    }
        printf("\n");

return 0;
}