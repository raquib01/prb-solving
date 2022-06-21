#include<stdio.h>
int main(){
	char arr[40] = "this is raquib";
	int i = 0;
	int counter = 0;
	int max = 0;
	while(1){
		if(arr[i] == ' ' || arr[i] == '\0'){
			max = counter > max ? counter : max;
			counter = 0;
			if(arr[i] == '\0'){
				break;
			}
		}
		else{
			counter++;
		}
		i++;
	}

	printf("%d\n",max);
	return 0;
}