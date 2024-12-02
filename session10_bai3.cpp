#include <stdio.h>

int main(){
	int a[] = {2,4,7,5,19,43,9};
	int n = sizeof(a)/sizeof(int);

	for(int i=0; i < n; i++){
		printf("%d ",a[i]);
	}
		printf("\n");
	for(int i=0; i<n; i++){
		int key=a[i];
		int j = i-1;
		
	while(j >= 0 && a[j] > key){
		a[j+1] = a[j];
		j=j-1;
	}
	a[j + 1]= key;
	}
	
	for(int i=0; i < n; i++){
		printf("%d ",a[i]);
	}

return 0;
}

