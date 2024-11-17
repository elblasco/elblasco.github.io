#include <stdio.h>

void print(const char a[], const int s, const char *prefix) {
	printf("%s\n", prefix);
	for (int i = 0; i < s; i++) {
		printf("%c ", a[i]);
	}
	printf("\n");
}

void read_elements(char s[], const int ms, int* s_s) {
	char r = '\0';
	*s_s = 0;
	
	while (*s_s < ms && r != '\n') {
		r = getchar();
		if (r != '\n' && r != ' ') {
			s[(*s_s)++] = r;
		}
	}
}

// Dichiarazione di get_elements

int main() {
	const int maxdim = 10;

	const int md1_s = maxdim;
	char d1[md1_s];
	int d1_s = 0;
	
	const int md2_s = maxdim;
	char d2[md2_s];
	int d2_s = 0;
	
	const int ms = maxdim;
	char s[ms];
	int s_s = 0;
	
	read_elements(s, ms, &s_s);
	
	get_elements(s, s_s, d1, md1_s, d1_s, d2, md2_s, d2_s);

	print(s, s_s, "Source = ");
	print(d1, d1_s, "D1	  = ");
	print(d2, d2_s, "D2	  = ");
	return 0;
}

// Implentazione di get_elements
