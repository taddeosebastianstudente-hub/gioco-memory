#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char** argv) {
	srand(time(NULL));
	int cartella=rand()%4+4;
	cout<<"inserisci la grandezza della cartella: "<<cartella<<endl;
	for(int i=0;i<cartella;i++){
		for(int j=0;j<cartella;j++){
			char lettere2=rand()%26+65;
			cout<<lettere2;
}
        cout<<endl; 
}
	return 0;
}
