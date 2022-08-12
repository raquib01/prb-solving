/*
Problem: Find the unique element from the array, rest all have a dublicate pair
eg: 1, 2, 3, 2, 1 => here 3

solution:
0^a^b^c^b^a = 0^(a^a)^(b^b)^c = 0^c = c
*/

#include<stdio.h>

void oneUnique(){
	// identifying 1 unique element
	int arr[5] = {1,2,3,2,1};
	int xorsum = 0;

	for(int i = 0; i<5; i++){
		xorsum = xorsum^arr[i];
	}

	printf("%d one-unique\n",xorsum);

}

void twoUnique(){
	// identifying 2 unique element
	int arr[8] = {2,4,6,7,4,5,6,2};

	// performing same approach as "1 unique element"
	int xorsum = 0;
	for(int i = 0; i<8; i++){
		xorsum = xorsum ^ arr[i];
	}
/*
	Now xorsum will be xor of 2 unique element(7^5)
	0111 => 7
	0101 => 5
  ^ ---
  	0010

	rightmost 1 is at 1st position, so we know, one of the unique num is having 1 at [1]position
	we need to xor all of that numbers having 1 at [1] position[In this list other unique num will be not there]
	This will give us 1 of the unique num
	and xor with prev xor will give us other
*/
	int bit = 0;
	int temp = xorsum;
	int pos = 0;
	while(bit==0){
		bit = temp & 1; // return 1 if last digit is 1
		pos++;
		temp = temp>>1;
	}
	pos--;

	int newxor = 0;
	for(int i = 0; i<8; i++){
		if(arr[i] & 1<<pos){
			newxor = newxor ^ arr[i];
		}
	}

	printf("%d %d two-Unique\n",newxor,newxor^xorsum);

}

void threeDuplicate(){
	int arr[] = {1,3,2,3,8,2,1,1,3,2};
	/*
	for eg: 1,2,3,2,1
	001, 010, 011, 010, 001

	indexarr = [0]:3, [1]:3, [2]:0
	means 3 '1's at 0th position

	1s always be present in multiples of 2 if dublicates and 3 if triplicates, like that
	that extra one is the unique number
	extra ones = [0]:1, [1]:1, [2]:0

	so 110 is '3' the unique number
	*/

	int sum;
	int ans = 0;
	for(int i = 0; i<32; i++){
		sum = 0;
		for(int j = 0; j<10; j++){
			if(arr[j] & 1<<i){
				sum++;
			}
		}
		if(sum%3!=0){
			ans = ans | 1<<i;
		}	
	}
	printf("%d three-Duplicate\n",ans);
}
int main(){

	oneUnique();
	twoUnique();
	threeDuplicate();


}