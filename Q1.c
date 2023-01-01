//wap to print first N natural number..

void natural(int n){
	if(n>0){
		natural(n-1);
		printf("%d,",n);
	}
	else
	return;
}
main(){
	int num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	printf("\nNatural number is = ");
	natural(num);
	return 0;
}
