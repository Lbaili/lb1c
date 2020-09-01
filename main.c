#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int main(void) {
char *ctemp=readline("Enter temperature in celsius: " );
double Tem= atof(ctemp);
double Fah=Tem*1.8+32.0;  
printf("%Fah° in Celsius is equivalent to %Fah° Fahrenheit.\n",Tem, Fah);
return 0;
}