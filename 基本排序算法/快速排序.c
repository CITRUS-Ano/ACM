#include <stdio.h>

void quickSort(int left, int right, int a[]){
	int i = left, j = right;
	int key = a[i];
	
	while(i < j){
		while(i < j && key <= a[j]){
			j--;
		}
		if(i < j){
			a[i] = a[j];
			i++;
		}
		while(i < j && key >= a[i]){
			i++;
		}
		if(i < j){
			a[j] = a[i];
			j--;
		}
	}
	a[i] = key;
	
	if(i == left){
		return;
	}
	
	quickSort(left, i - 1, a);
	quickSort(i + 1, right, a);
}

int main(){
	int i = 0;
	int a[] = {12, 1, 6, 5, 13, 4, 2, 7, 5};
	int len = sizeof(a) / sizeof(int);
	
	printf("原始序列: ");
	for(i = 0; i < len; i++){
		printf("%d ", a[i]);
	} 
	putchar('\n');
	
	printf("快速排序后序列: ");
	quickSort(0, len - 1, a);
	for(i = 0; i < len; i++){
		printf("%d ", a[i]);
	} 
	putchar('\n');
	
	return 0;
}
