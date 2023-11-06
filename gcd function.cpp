#include<cstdio>
int gcd(int a, int b){
	if(a<0){
		a=-a;
	}
	if(b<0){
		b=-b;
	}
	while(a!=b){
		if(a<b){
			b=b-a;
		}
		else{
		a=a-b;	
		}
	}
	return a;
}

int main(){
	int a; 
	int b;
	printf("first number is ");
	scanf("%i",&a);
	printf("second number is ");
	scanf("%i",&b);
	printf("gcd of %i and %i is %i\n",a,b,gcd(a,b));
	return 0;
}
