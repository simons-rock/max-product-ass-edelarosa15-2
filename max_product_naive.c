#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size){
	int a = arr[0], b = arr[1]; 
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (arr[i]*arr[j]>a*b){
				a=arr[i], b=arr[j];
			}
		}
	}
	return a*b; 
}
