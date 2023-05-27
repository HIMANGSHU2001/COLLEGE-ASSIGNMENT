#include<stdio.h>
struct cust{
	long long int acc_num;
	char name[35];
	double blance;
};
void chack_balance(struct cust ,int );
int main(){
	struct cust cast[300];
	int i,j,n,k;
	long long int m;
	double s;
	
	
	printf("\nenter total customar no  ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n\n\n enter custormer detels \n");
		printf("\n Account number ");
		scanf("%lld",&cast[i].acc_num);
		printf("\n Name ");scanf("%s",cast[i].name);
		
		printf("\n balance ");scanf("%lf",&cast[i].blance);
	}
	chak_balance(cast,n);
	printf("\n\n choose 1 for deposit \t 0 for withdrawal ");scanf("%d",&k);
	switch(k){
		case 1:
			
			printf("\n enter account number ");scanf("%lld",&m);
			for(i=0;i<n;i++){
				if(cast[i].acc_num==m){
					printf("\n enter deposit amount ");scanf("%lf",&s);
					cast[i].blance +=s;
				}
			}
			break;
		case 0:
			printf("\n enter account number ");scanf("%lld",&m);
			for(i=0;i<n;i++){
				if(cast[i].acc_num==m){
					printf("\n enter withdrawal amount ");scanf("%lf",&s);
					
					if(cast[i].blance-s<0){
						
						printf("\n The balance is insufficient for the specified withdreawal ");
					}else{
						cast[i].blance -=s;
						printf("\n withdreawal is ok ");
					}
					
				}
			}
			break;
		default:
			printf("wrong option choose ");
		
		
	}
	 chak_balance(cast,n);
	return 0;
}
	void chak_balance(struct cust num[],int n){
		int i;
		for(i=0;i<n;i++){
			printf("\n\n");
			//if(num[i].blance<1000){
			printf("\n acc no- %lld",num[i].acc_num);
			printf("\n name- %s",num[i].name);
			printf("\n blance- %0.2lf",num[i].blance);
				
			
		}
	}
