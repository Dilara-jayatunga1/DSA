#include<stdio.h>

int main() {
	int a[50],size,pos;
	printf("enter the size of array: ");
	scanf("%d",&size);

	printf("enter the elements of the array: ");
	for (int i=0; i<size; i++) {
		scanf("%d",&a[i]);

	}

	printf("the elements: ");
	for (int i=0; i<size; i++) {
		printf("%d ",a[i]);
	}

	printf("enter the position you want to delete:");
	scanf("%d",&pos);

	for(int i = pos-1; i <size -1; i++) {
		a[i]=a[i+1];

	}
	size--;

	printf("the elements: ");
	for (int i=0; i<size; i++) {
		printf("%d ",a[i]);
	}
}