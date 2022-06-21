#include<stdio.h>
int main(){
	char s[5] = "RaQu";

	int i = 0;
	while(s[i] != '\0'){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32; // becos 'a' - 'A' = 32
		}
		i++;
	}

	printf("%s\n",s);
	return 0;
}