#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

struct option_table {
		const char *varName;
	} table[] = {
		{ "1) Login" },
		{ "2) Register" },
		{ "3) Exit program" },
		{ ""},
	};

int main(int argc, char** argv) {
   int arg_error = 0;
   char argument[512];
	
	printf("Simple login/register management program in c\n");
	printf("by @ATGDroid (github.com/Kysela)\n");
	printf("This program is just for example purposes only\n");
	printf("Version 1.0\n\n");
	
	printf("Select one of these options\n");
	printf("1) Login\n");
	printf("2) Register\n");
	printf("3) Exit program\n\n");
	
	const struct option_table *options = table;
	while (options->type) {
		if (environment->type == kEnv) {
	
	
char choice[512];
do {
      scanf("%s", choice);
      if (strcmp(choice, "") == 0)
           continue;
 } while (strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0 && strcmp(choice, "3") != 0);
 

return 0;
}