#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "square_matrix.h"

#include "queue.h"


void in_place_transpose_square_matrix_tiled(square_matrix* m)
{
   if(m == NULL){
      return;
   }
else{
   size_t n = m->order;
   matrix_element** data = m->data;
   size_t submatrix_size = MIN(n, BAND_SIZE);
   for(size_t start_row = 0; start_row <= n - submatrix_size; start_row += submatrix_size){
      for(size_t start_col = 0; start_col <= n - submatrix_size; start_col += submatrix_size){
         in_place_transpose_square_submatrix(m, start_row, start_col, submatrix_size);
      } }
   for(size_t start_row = 0; start_row <= n - submatrix_size; start_row += submatrix_size){
      for(size_t start_col = 0; start_col < start_row; start_col += submatrix_size){
         swap_submatrices(m, start_row, start_col, submatrix_size);
      }
  }
}
   return;
}

void in_place_transpose_square_matrix_tiled(square_matrix* m){

	int *dt = (int *)arg;
	int k = 0, i = 0;
	
	int x = dt[0];
	for (i = 1; i <= x; i++)
		k += dt[i]*dt[i+x];
	
	int *c = (int*)malloc(sizeof(int));
		*c = k;

	cthread_exit(k);

}

void in_place_transpose_square_matrix_schooner(square_matrix* m){

	if (m!==NULL)
	{
		for(size_t i = m*(n/m); i < n; i++)
      for(size_t j = 0; j < i; j++)
         SWAP(data[j][i], data[i][j]);
	}
	
}

int int main(int argc, char const *argv[])
{
	
pthread_t *threads;
	threads = (pthread_t*)malloc(max*sizeof(pthread_t));
	
	int count = 0;
	int* dt = NULL;
	for (i = 0; i < r1; i++)
		for (j = 0; j < c2; j++)
			{
			dt = (int *)malloc((20)*sizeof(int));
			dt[0] = c1;
	
			for (k = 0; k < c1; k++)
				dt[k+1] = mtBB_A[i][k];
	
			for (k = 0; k < r2; k++)
				dt[k+c1+1] = mtBB_B[k][j];
			
				pthread_create(&threads[count++], NULL,
							mult, (void*)(dt));
				
					}
	
	printf("RESULTANT mtBB_RIX IS :- \n");
	for (i = 0; i < max; i++)
	{
	void *k;
	
	pthread_join(threads[i], &k);
			
		
		int *p = (int *)k;
	printf("%d ",*p);
	if ((i + 1) % c2 == 0)
		printf("\n");
	}

	

	return 0;
}


