//wap to print N natural number in reverse order...

int num;
main(){
	int i=1;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	printf("\nNatural number in reverse order = ");
	naturalR(i);
	return 0;
}

void naturalR(int n){
	if(n!=(num+1)){
		naturalR(n+1);
		printf("%d,",n);
	}
	else
	return;
}

