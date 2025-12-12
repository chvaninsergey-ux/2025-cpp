#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char* projects;
	int* time;
	int count;
	int capacity;
} projectbook;

typedef struct {
	char name[50];
	char post[50];
	projectbook projects;
} worker;

void init_projectbook(projectbook* pb) {
	pb->count = 0;
	pb->capacity = 5;
	pb->projects = (char*)malloc(pb->capacity * sizeof(int));
	pb->time = (int*)malloc(pb->capacity * sizeof(int));
}
void add_project(projectbook* pb, char project, int time) {
	if (pb->count >= pb->capacity) {
		pb->capacity *= 2;
		pb->projects = (char*)realloc(pb->projects, pb->capacity * sizeof(int));
		pb->time = (int*)realloc(pb->time, pb->capacity * sizeof(int));
	}
	pb->projects[pb->count] = project;
	pb->time[pb->count] = time;
	pb->count++;
}
int calculate_projects(const projectbook* pb) {
	if (pb->count == 0) {
		return 0;
	}
	else {
		return pb->count;
	}
}
worker* create_worker(int n) {
	worker* workers = (worker*)malloc(n * sizeof(worker));
	for (int i = 0;i < n; ++i) {
		init_projectbook(&workers[i].projects);
	}
	return workers;
}
worker* max_projects(worker* workers, int n) {
	if (n <= 0) return NULL;
	worker* max = &workers[0];
	int max_proj = calculate_projects(&workers[0].projects);
	for (int i = 1; i < n; ++i) {
		int current_proj = calculate_projects(&workers[i].projects);
		if (current_proj > max_proj) {
			max = &workers[i];
			max_proj = current_proj;
		}
	}
	return max;
}
void print_worker(const worker* workers) {
	printf("имя: %s, должность: %s\n", workers->name, workers->post);
	printf("проекты:");
	for (int i = 0; i < workers->projects.count;++i) {
		printf("%s", workers->projects.projects);
	}
}
void free_projectbook(projectbook* pb) {
	free(pb->projects);
	free(pb->time);
	pb->capacity = 0;
	pb->count = 0;
}
void free_workers(worker* workers, int n) {
	for (int i = 0; i < n; ++i) {
		free_projectbook(&workers[i].projects);
	}
	free(workers);
}
int main(int argc, char** argv) {
	int n = 0;
	scanf_s("%d", &n);
	worker* workers = create_worker(n);
	for (int i = 0;i < n;++i) {
		print_worker(&workers[i]);
	}
	worker* max = max_projects(workers, n);
	if (max) {
		printf("\nсотрудник с наибольшим числом проектов:\n");
		print_worker(max);
	}
	free_workers(workers, n);
	return 0;
}