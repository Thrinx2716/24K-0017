#include <stdio.h>

int main() {

	char ch;
	printf("Enter a character (lowercase): ");
	scanf("%c", &ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        	printf("%c is a vowel", ch);
	}
    	else{
		if (ch >= '0' && ch <= '9') {
        		printf("%c is a digit", ch);
   	 	}
   		else{ 
			if (ch >= 'a' && ch <= 'z'){
       				printf("%c is a consonant", ch);
			}
    			else {
        			printf("%c is a special character", ch);
    			}
		}
	}

  return 0;
}
