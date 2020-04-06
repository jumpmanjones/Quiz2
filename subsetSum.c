//Pranav Nelakonda, pn5474

#include<stdio.h>

#include <stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<stdint.h>
bool sumsTo(int x[], int n, int k, int v){
	if(v==0 && k==0)
		return true;
	if(v!=0 && k==0)
		return false;
	if(n==0)
		return false;
	bool first = false;
	if(v >= x[0])
		first = sumsTo(x+1,n-1,k-1,v-x[0]);
	bool second = sumsTo(x+1, n-1, k , v);
	return first||second;	

}

//Just for Testing
int main(void){
	int x[5] = {1,3,4,7,9};
	int n = 5;
	int k = 2;
	int v = 6;
	bool out = sumsTo(x,n,k,v);
	//printf("%d\n", out);
	
 }
