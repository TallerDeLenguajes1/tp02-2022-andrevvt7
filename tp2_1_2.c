#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20


int main(){

srand((int)time(NULL));
int i, vt[N], *pvector = vt;

for(i = 0; i < N ; i++)
{
*pvector = 1 + rand() % 100;
printf("%d\n", *pvector);
pvector++;
}

return 0;
}