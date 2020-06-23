#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

struct option_table {
		const char *optionName;
	} table[] = {
		{ "1) Login" },
		{ "2) Register" },
		{ "3) Exit program" },
		{ ""},
	};
	
int to_int(const char* str) {
	int ret = 0, sign = 1;
	if( *str == '+' || *str == '-' ) {
       if( *str == '-' ) sign = -1;
       str++;
    }
    while(*str) {
        ret = (ret << 4) - (ret << 2) - (ret << 1) + (*str++ - '0');
    }
    return ret * sign;
}

bool is_number(const char* s) {
const char* p = s;
if( *p == '+' || *p == '-' ) p++;
while (*p != '\0') {
if (*p != '.' && !((uint8_t)(*p) - '0' <= 9))
return false;
p++;
}
return true;
}
	
int argument_supported(const char* arg) {
int table_position = 0;
const struct option_table *options = table;
while (options->optionName) {
    table_position++;
	if (to_int(arg) )
}

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
	

	
	
char choice[512];
do {
      scanf("%s", choice);
      if (strcmp(choice, "") == 0)
           continue;
 } while (strcmp(choice, "1") != 0 && strcmp(choice, "2") != 0 && strcmp(choice, "3") != 0);
 


return 0;
}
