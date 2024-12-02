#include <stdio.h>

int main(){
	int a[5]={4,5,1,2,3};
	
	for(int i=0; i<5; i++){
		int minIndex=i;
		for(int j=i+1;j<5;j++){
			if(a[j]<a[minIndex]){
				minIndex=j;
			}	
		}
	if(minIndex!=i){
		int temp = a[minIndex];
		a[minIndex]=a[i];
		a[i]=temp;
	}
	}
	for(int i=0; i < 5; i++){
		printf("%d ",a[i]);
	}



return 0;
}

