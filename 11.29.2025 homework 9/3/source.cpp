#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
typedef struct {
	int x;
	int y;
}point;
void init_point(point*, int x, int y);
double dist(point* p1, point* p2);
int main(int argc, char** argv) {
	int n = 0;
	scanf_s("%d", &n);
	point* points = (point*)calloc(n, sizeof(point));
	double d = 0;
	for (int i = 0;i < n;++i) {
		int x = 0;
		int y = 0;
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		init_point(&points[i], x, y);
	}
	for (int i = 0;i < n;++i) {
		for(int j = 0;j < n;++j) {
			double p = 0;
			p = dist(&points[i], &points[j]);
			if (p > d) {
				d = p;
			}
		}
	}
	printf("%.15lf", d);
	free(points);
	return 0;
}
void init_point(point* p, int x, int y) {
	p->x = x;
	p->y = y;
}
double dist(point* p1, point* p2) {
	return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}