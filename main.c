#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int main(void) {
char *ctemp=readline("Enter temperature in celsius: " );
double Tem= atof(ctemp);
double Fah=Tem*1.8+32.0;  
printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",Tem, Fah);
return 0;
}