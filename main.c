# Author: Yanling Wang yuw17@psu.edu
# Collaborator: cxl5844@psu.edu#include <stdio.h>
#include<readline/readline.h>



int main(void) {
double Tem=0.0;
Tem= readline("Enter temperature in celsius: " );
double Fah=0.0;
Fah=Tem*1.8+32.0;
printf(Tem + "° in Celsius is equivalent to "+Fah +"° Fahrenheit.");
return 0;
}