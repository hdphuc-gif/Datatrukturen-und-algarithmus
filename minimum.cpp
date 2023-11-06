#include<cstdio>
int minimum(int array[], int size){
	int min=array[0];
	for(int i=0;i<size;i++){
		if(array[i]<min){
			min = array[i];
		}
	}
	return min;
}

int main(){
	int size,i,count,array[count];
	printf("gibt die Size des Arrays an\n");
	scanf("%i",& size);
	if(size<0){
		size=-size;
		count= size;
	}
	if(size ==0){
		printf("The Arrays mit 0 Elements");
	}
	else{
		count = size;
		printf("gibt der Arrays an\n");
		for(i=0;i<count;i++){
			scanf("%i",& array[i]);
		}
		printf("den minimalen Wert des ubergebenen Arrays ist %i\n",minimum(array,count));
	}
	return 0;
}
	
