#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
typedef struct {
	int x;
	int y;
}point;
double dist(int x, int y);
void init_point(point*, int x, int y);
int main(int argc, char** argv) {
	int n = 0;
	scanf_s("%d", &n);
	point* points = (point*)calloc(n, sizeof(point));
	int x1 = 0;
	int y1 = 0;
	for (int i = 0;i < n;++i) {
		int x = 0;
		int y = 0;
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		init_point(&points[i], x, y);
		double k = 0.0;
		double p = 0.0;
		k = dist(x, y);
		if (k > p) {
			p = k;
			x1 = x;
			y1 = y;
		}
	}
	printf("%d %d", x1, y1);
	free(points);
	return 0;
}
void init_point(point* p, int x, int y) {
	p->x = x;
	p->y = y;
}
double dist(int x, int y) {
	return sqrt(x * x + y * y);
}