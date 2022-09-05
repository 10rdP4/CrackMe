#include <stdio.h>
#include <string.h>

int main(){
	char *passwd = "$uperZecretP4zz";

	char string [256];
	int total_sum = 0;
	int total_mul = 1;


	printf("Enter passwd: ");
	scanf("%s", string);

	if (strlen(string) == 6){
		if (string[0] != 'P'){
			printf("Almost");
		}else{
			for(int i = 1; i <= 5; i++){
				total_sum += string[i] - '0';
				total_mul *= string[i] - '0';
			}
			if( total_sum == 24 && total_mul == 2048){
				if ( string[1] == '8' ){
					printf("Correct");
				}else{
					printf("really close");
				}
			}else{
				printf("%d\n", total_sum);
				printf("%d", total_mul);
				printf("Close");
			}
		}
	}else{
		printf("Incorrect");
	}
	return 0;
}
