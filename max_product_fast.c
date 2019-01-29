#include "max_product.h"
#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}

	int max_pairwise_product_fast(int *arr, int n){
		int ind=0;
		for (int i=1; i<n; i++){
			if(arr[i]>arr[ind]){
				ind=i;}}
		SWAP(arr[ind], arr[n-1]);
		ind=0;
		for (int i=1; i<n-1; i++){
			if(arr[i]>arr[ind])
				ind=i;}
		SWAP(arr[ind], arr[n-2]);
		return arr[n-1]*arr[n-2];
}

