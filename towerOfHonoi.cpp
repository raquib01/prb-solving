/*
	|		|		|
   ---		|		|
	|		|		|
  -----	  	|		|
	|		|		|
 -------	|		|
------------------------------
	A		B		C
(src)	(helper)  (dest)
Problem: have to move all the stack from A to C
Condition: you cannot place bigger block on top of smaller one
*/

#include<iostream>
using namespace std;


void transfer(int n,char src,char dest, char helper){
	if(n==0){
		return;
	}
	transfer(n-1,src,helper,dest);// first move [n-1] block from [src] to [helper] using [dest]
	cout<<src<<"->"<<dest<<endl;// then last block src->dest
	transfer(n-1,helper,dest,src);// then move [n-1] block from [helper] to [dest] using [src]
}

int main(){
	char src = 'A';
	char helper = 'B';
	char dest = 'C';
	int n = 3;
	transfer(n,src,dest,helper);// moving [n] block from [src] to [dest] using [helper]
}