#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cmath>
typedef struct {
	char* name;
	char* surname;
	int math;
	int phys;
	int inf;
} student;
void init_student(student* s1, char* name, char* surname, int math, int phyz, int inf);
int main(int argc, char** argv) {
	int n = 0;
	scanf_s("%d", &n);
	student* students = (student*)calloc(n, sizeof(students));
	int sum_math = 0;
	int sum_phys = 0;
	int sum_inf = 0;
	for (int i = 0; i < n;++i) {
		char* name = (char*)calloc(50, sizeof(char));
		char* surname = (char*)calloc(50, sizeof(char));
		int math = 0;
		int phys = 0;
		int inf = 0;
		scanf_s("%49s %49s %d %d %d", name, surname, &math, &phys, &inf);
		init_student(&students[i], name, surname, math, phys, inf);
		sum_math += math;
		sum_phys += phys;
		sum_inf += inf;
	}
	printf("%lf %lf %lf", sum_math * 1.0 / n, sum_phys * 1.0 / n, sum_inf * 1.0 / n);
	for (int i = 0;i < n;++i) {
		free(&students[i].name);
		free(&students[i].surname);
	}
	free(students);
	return 0;
}
void init_student(student* s1, char* name, char* surname, int math, int phys, int inf) {
	s1->name = name;
	s1->surname = surname;
	s1->math = math;
	s1->phys = phys;
	s1->inf = inf;
}