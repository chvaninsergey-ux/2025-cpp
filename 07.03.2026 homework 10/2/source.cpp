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
            printf("error");
            return 0.0;
        }
        return data[index];
    }

    void set(int index, double value) {
        if (index < 0 or index >= size) {
            printf("reror");
            return;
        }
        data[index] = value;
    }

    int getSize() {
        return size;
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

    void print() {
        for (int i = 0; i < size; i++) {
            printf("%.2f ", data[i]);
        }
        printf("\n");
    }

    void insert(int index, double value) {
        if (index < 0 or index > size) {
            printf("error");
            return;
        }
        if (size == capacity) {
            resize(capacity * 3);
        }
        for (int i = size; i > index; i--) {
            data[i] = data[i - 1];
        }
        data[index] = value;
        size++;
    }

    void clear() {
        delete[] data;
        data = new double[3];
        size = 0;
        capacity = 3;
    }

    bool contains(double value) {
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                return true;
            }
        }
        return false;
    }
};
