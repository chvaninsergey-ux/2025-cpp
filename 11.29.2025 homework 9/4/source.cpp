#include<stdio.h>
#include<stdlib.h>
#include<cmath>
typedef struct {
	int x;
	int y;
} point;
void init_point(point* p1, int x, int y);
double dist(point* p1, point* p2);
int main(int argc, char** argv) {
	int n = 0;
	scanf_s("%d", &n);
	point* points = (point*)calloc(n, sizeof(point));
	double p_max = 0;
	for (int i = 0; i < n; ++i) {
		int x = 0;
		int y = 0;
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		init_point(&points[i], x, y);
	}
	for (int i = 0;i < n;++i) {
		for (int j = 0;j < n;++j) {
			for (int k = 0; k < n; ++k) {
				double p = 0.0;
				double a = dist(&points[i], &points[j]);
				double b = dist(&points[j], &points[k]);
				double c = dist(&points[k], &points[i]);
				p = a + b + c;
				if (p > p_max) {
					p_max = p;
				}
			}
		}
	}
	printf("%.15lf", p_max);
	free(points);
	return 0;
}
void init_point(point* p1, int x, int y) {
	p1->x = x;
	p1->y = y;
}
double dist(point* p1, point* p2) {
	return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}
