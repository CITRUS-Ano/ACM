#include <stdio.h>

void insertSort(int a[], int n){
	int i, j, t;
	for(i = 1; i < n; i++){
		if(a[i] < a[i - 1]){
			j = i - 1;
			t = a[i];
			while(j > -1 && t < a[j]){  
                a[j + 1] = a[j];         /*��t���бȽ�,��ֵ���� */
                j--;
            }
            a[j + 1] = t;                /*���t�д�ŵ�Сֵ*/ 
        }
			
	}
	
}

int main(){
	int i;
	int a[] = {3, 1, 12, 6, 5, 8, 7, 4};
	int len = sizeof(a) / sizeof(int);
	
	printf("ԭʼ����: ");
	for(i = 0; i < len; i++){
		printf("%d ", a[i]);
	} 
	putchar('\n');
	
	printf("���������: ");
	insertSort(a, len);
	for(i = 0; i < len; i++){
		printf("%d ", a[i]);
	} 
	putchar('\n');
	
	
	return 0;
} 
