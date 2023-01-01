//wap to print sum of first N natural number...

int s=0;
main(){
	int num;
	printf("\nEnter a natural number = ");
	scanf("%d",&num);
	printf("\nsum of the number = ");
	sum(num);
	return 0;
}

void sum(int n){
	if(n>0){
		s=n+s;
		sum(n-1);
	}
	else{
		printf("%d",s);
		return;
	}
	
}

