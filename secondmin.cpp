#include<cstdio>

int second_smallest(int array[], int size){
	int min=array[0];
	int secondmin=array[1];
	for(int i=0;i<size;i++){
		if(array[i]<=min){
			secondmin= min;
			min = array[i];
		}
	}
	return secondmin;
	
}

int main(){
	int size,i,count,array[count];
	printf("gibt die Size des Arrays an\n");
	scanf("%i",& size);
	if(size<0){
		size=-size;
		count= size;
	}
	if(size==1){
		printf("The Arrays has only 1 Element");
	}
	if(size==0){
		printf("The Arrays is Empty\n");
	}
	else{
		count = size;
		printf("gibt der Arrays an\n");
		for(i=0;i<count;i++){
			scanf("%i",& array[i]);
		}
		printf("den zweite minimalen Wert des ubergebenen Arrays ist %i\n",second_smallest(array,count));
	}
	return 0;
}
