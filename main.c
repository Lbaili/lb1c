#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int main(void) {
char *ctemp=readline("Enter temperature in celsius: " );
double c= atof(ctemp);
double f=c*1.8+32.0;  
printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",c, f);

return 0;
}