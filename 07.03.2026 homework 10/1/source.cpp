#include<iostream>
#include<cstdio>

class ArrayList {
public:
	double* data;
	int size;
	int capacity;

	ArrayList() { 
		size = 0;
		capacity = 3;
		data = new double[capacity];
	}

	~ArrayList() {  
		delete[] data;
	}

	void resize(int new_capacity) {
		double* new_data = new double[new_capacity];
		for (int i = 0; i < size; i++) {
			new_data[i] = data[i];
		}
		delete[] data;
		data = new_data;
		capacity = new_capacity;
	}

	void add(double value) {
		if (size == capacity) {
			resize(capacity * 3);
		}
		data[size] = value;
		size++;
	}

	double get(int index) {
		if (index < 0 or index >= size) {
			printf("error\n");
			return 0.0;
		}
		return data[index];
	}

	void set(int index, double value) {
		if (index < 0 or index >= size) {
			printf("error\n");
			return;
		}
		data[index] = value;
	}

	void remove(int index) {
		if (index < 0 or index >= size) {
			printf("error");
			return;
		}
		for (int i = index; i < size - 1; i++) {
			data[i] = data[i + 1];
		}
		--size;
	}

	int getSize() {
		return size;
	}

	void print() {
		for (int i = 0; i < size; i++) {
			printf("%.2f", data[i]);
		}
		printf("\n");
	}
};

