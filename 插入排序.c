#include <stdio.h>

void insertSort(int a[], int n){
	int i, j, t;
	for(i = 1; i < n; i++){
		if(a[i] < a[i - 1]){
			j = i - 1;
			t = a[i];
			while(j > -1 && t < a[j]){  
                a[j + 1] = a[j];         /*与t进行比较,大值右移 */
                j--;
            }
            a[j + 1] = t;                /*存回t中存放的小值*/ 
        }
			
	}
	
}

int main(){
	int i;
	int a[] = {3, 1, 12, 6, 5, 8, 7, 4};
	int len = sizeof(a) / sizeof(int);
	
	printf("原始序列: ");
	for(i = 0; i < len; i++){
		printf("%d ", a[i]);
	} 
	putchar('\n');
	
	printf("排序后序列: ");
	insertSort(a, len);
	for(i = 0; i < len; i++){
		printf("%d ", a[i]);
	} 
	putchar('\n');
	
	
	return 0;
} 
