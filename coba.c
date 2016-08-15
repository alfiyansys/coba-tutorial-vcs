#include <stdio.h>
void f1();
int jumlah(int,int);

int main(){
	printf("Hello world!\n");
	printf("%d + %d = %d\n",4,6,jumlah(4,6));
	printf("Program ini dikembangkan oleh developer A\n");
	printf("Program ini dibuat oleh developer B\n");
	return 0;
}

void f1(){
	printf("Ini adalah fungsi F1\n");
}

int jumlah(int a, int b){
	return a+b;
}
