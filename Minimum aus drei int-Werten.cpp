// An dieser Stelle sollten Sie die Methode min implementieren
#include<ostream>
int min(int a, int b,int c){
	if(a<=b){
		if(a<=c){
		return a;
		}
		return c;
	}
	if(b<=c){
		return b;
	}
	else{
		return c;
	}
}

int main() {
  int a = 15;
  int b = -7;
  int c = 42;

  // An dieser Stelle sollten Sie die Methode min aufrufen und das Ergebnis ausgeben.
 printf("%i\n",min(a,b,c));

  return 0;
}
