#include "K.hpp"

void outputFirst(const K arr[]){
	arr[0].output();
}

int main(){
	K arr[] = { K() };
	outputFirst(arr);	
	return 0;
}