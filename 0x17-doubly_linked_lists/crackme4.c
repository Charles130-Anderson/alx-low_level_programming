#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[50];
	char *hidden_password = "hidden_password";

	printf("Enter the password: ");
	fgets(password, sizeof(password), stdin);

	/* Remove newline character from the password */
	password[strcspn(password, "\n")] = 0;

	if (strcmp(password, hidden_password) == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("Incorrect password\n");
	}

	return (0);
}
