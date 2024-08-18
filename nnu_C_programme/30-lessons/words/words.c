#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char str[50];
	int cnt;
}words;


int main() {
	char temp[50];
	FILE* fp;
	words text[200];
	int num = 0;
	int i, j, new = 1;

	fp = fopen("word_text.txt");
	
	while(fscanf)
}