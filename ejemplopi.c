#include <stdio.h>
int main (int argc, char* argv[]) {
int c = 4, n;
float pi = 0;

for (n = 3; n <= 99999999; n+=2){ 
pi = pi +( (float)- c/n);
n = n + 2;
pi = pi + ((float) c/n);

}

pi += c;

printf ("pi:\t%1.54f", pi);
return 0;
}