#include<stdio.h>
int main(void){
	int sum,n;
	while (~scanf("%d", &n)){
		if(n==0)
			break;
		do{
			sum=0;
			while(n!=0){
				sum+=n%10;
				n=n/10;
			}
			n=sum;
		}while(sum>=10);
		printf("%d\n", sum);
	}
	
	
	
}
