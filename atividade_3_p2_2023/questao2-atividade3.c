#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, z;
	float y;
	scanf("%d", &x);
	scanf("%f", &y);
	scanf("%d%f", &x, &y);
	scanf("%d%d", &x, &z);
	scanf("%d %d", &x, &z);
	return 0;
}