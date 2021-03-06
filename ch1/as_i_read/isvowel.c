//As it turns out, C99 has a boolean type.
#include <stdio.h>

_Bool IsVowel(char ch) {
	switch(ch) {
		case 'A': case 'E': case 'I': case 'O': case 'U':
		case 'a': case 'e': case 'i': case 'o': case 'u':
			return 1;
		default:
			return 0;
	}
}

int main() {

	char c = 'O';

	printf("%d", IsVowel(c));

	return 0;
}
