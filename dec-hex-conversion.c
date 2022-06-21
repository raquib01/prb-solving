#include<stdio.h>
#include<math.h>
#include<string.h>

int hex_dec(char* hex){
	int len = strlen(hex);
	int dec = 0;
	int i = 0;
	for(int j = len-1; j>=0; j--){// traversing in reverse
		if(hex[j]<=57 && hex[j] >=48){// if char is between 0-9
			dec = dec + ((int)hex[j]-48)*pow(16,i);
			i++;
		}
		else{// if char is between A-F
			dec = dec + ((int)hex[j]-55)*pow(16,i);
			i++;
		}
	}
	printf("%d\n",dec);
	return 1;
}

int dec_hex(int n){
	char hex[10];
	int j = 0;
	char temp;
	while(n){
		if((n%16)>9){// if char is between 0-9
			temp = (n%16) + 55; 
		}
		else{// if char is between A-F
			temp = (n%16) + 48;
		}
		hex[j] = temp;
		j++;
		n = n/16;		
	}
	j--;
	for(;j>=0;j--){// going reverse
		printf("%c",hex[j]);
	}
	return 1;
}
int main(){
	char hex[10];
	int dec;
	scanf("%s",hex);
	hex_dec(hex);
	scanf("%d",&dec);
	dec_hex(dec);
}