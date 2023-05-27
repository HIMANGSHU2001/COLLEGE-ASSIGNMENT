#include<stdio.h>
#include<string.h>

void reverse_recursive(char *str)
{
	
	if(*str)
	{
		//printf("Reverse String using Resursive:");
		reverse_recursive(str+1);
		printf("%c", *str);
	}
}
void reverse_Nonrecursive(char *str)
{
	int l, i;

	char *begin_ptr, *end_ptr, ch;

// Get the length of the string

	l = strlen(str);
		
// Set the begin_ptr and end_ptr

// initially to start of string

	begin_ptr = str;

	end_ptr = str;

// Move the end_ptr to the last character

	for (i = 0; i < l - 1; i++)

		end_ptr++;

// Swap the char from start and end

// index using begin_ptr and end_ptr

	for (i = 0; i < l / 2; i++) {

// swap character

		ch = *end_ptr;

		*end_ptr = *begin_ptr;

		*begin_ptr = ch;

// update pointers positions

		begin_ptr++;

		end_ptr--;

	}

}

int main()
{
	char a[1000];
	printf("Enter a string:");
	gets(a);
	printf("Reverse String using Resursive:\n");
	reverse_recursive(a);
	printf("\n");
	printf("\n");
	reverse_Nonrecursive(a);
	printf("Reverse a String without using Recursive :\n%s", a);
	return 0;
}
