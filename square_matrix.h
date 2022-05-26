#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


void *square_matrix(void* arg)
{
    int *sqmx_ = (int *)arg;
    int k = 0, i = 0;
     
    int x = sqmx_[0];
    for (i = 1; i <= x; i++)
           k += sqmx_[i]*sqmx_[i+x];
     
    int *p = (int*)malloc(sizeof(int));
         *p = k;
     
    pthread_exit(p);
}