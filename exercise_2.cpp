#include <stdio.h>

int main(){
	float S,LS,Years;

		printf("Enter Capital Sum : \n");
		scanf("%f",&S);
		printf("Enter Rate of Interest : \n");
		scanf("%f",&LS);
		printf("Enter No of years : \n");
		scanf("%f",&Years);	
	for(int i = 1;i<=Years;i++){
		float TinhLai = S*LS/100;
		S += TinhLai;
		printf("\n Year: %d \tInterest: %f \tSum: %f",i,TinhLai,S);
	}
}
