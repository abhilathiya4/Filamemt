#include<stdio.h>
#include<string.h>

int main(){
	
	char *username;
	char *password;
	
	printf("Enter Username : \n");
	gets(username);
	
	printf("Enter Password : \n");
	gets(password);
	
	if(strcmp(username, "username1") == 0){
		if(strcmp(password, "password1") == 0){
			
			printf("\nUser successfully logged in...");
		}
		else{
			
			printf("\nPassword entered is invalid");
		}
	}
	else{
		
		printf("\nUsername entered is invalid");
	}
}
