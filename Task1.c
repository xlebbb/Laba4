#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	char* tmp;
	float a = strtof(argv[1], &tmp);
	if (*tmp) {
		return -1;
	}
	float b = strtof(argv[2], &tmp); 
	if (*tmp) {
		return -1;
	}
	float c = strtof(argv[3], &tmp);
	if (*tmp) {
		return -1;
	}
	float dis = pow(b, 2) - 4*a * c;
	if (dis < 0) {
		printf("\nНет корней\n");
		return 0;
	}
	if (dis == 0) {
		float x = -b /( 2 * a);
		printf("\nx=%lf", x);
		return 0;
	}
	if (dis > 0) {
		float x1 = (-b + sqrt(dis,2)) / (2 * a);
		float x2= (-b - sqrt(dis,2)) / (2 * a);
		printf("x1=%lf\nx2=%lf", x1, x2);
		return 0;
	}
	return 0;
}