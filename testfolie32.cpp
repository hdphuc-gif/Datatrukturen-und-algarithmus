#include <cstdio>
int faculty(int x){
	int result =1;
	for(int i =x;i>0;--i){
		result *=i;
	}
	return result;
}

int main(){
	int x=6;
	printf(" dap an la %i\n",faculty(x));
}
