
 #include <cstdio>
 //gibt fakutat zuruck (x!= x*(x-1)*.....*1)
int faculty(int x){
	int result =1;
	int w =x;
	while(w>0){
		result*=w;
		--w;
	}
	return result;
}

int main(){
	int Ganzzahl;
	printf("Ganzzahl = ");
	scanf("%i",& Ganzzahl);
	if(Ganzzahl<0){
		printf(" Illegal Eingabe\n");
		return -1;
	}
	printf("%i ist das Produkt von %i !\n", faculty(Ganzzahl), Ganzzahl );
}