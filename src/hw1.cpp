#include <iostream>

using namespace std;
class MaxHeap {
private:
    int* heap;
    int size;

    void printStep(const string& step) {
        cout << step << ": ";
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }

    void maxHeapify(int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && heap[left] > heap[largest])
            largest = left;
        if (right < size && heap[right] > heap[largest])
            largest = right;
        
        if (largest != i) {
            swap(heap[i], heap[largest]);
            printStep("Heapify step");
            maxHeapify(largest);
        }
    }

public:
    MaxHeap(int arr[], int n) {
        heap = arr;
        size = n;
        printStep("Initial array");
        for (int i = size / 2 - 1; i >= 0; i--) {
            maxHeapify(i);
        }
    }

    void printHeap() {
        printStep("Final Max Heap");
    }
};

int main() {
    int values[] = {100, 5, 9, 6, 8, 20, 10, 12, 18, 9};
    int n = sizeof(values) / sizeof(values[0]);
    MaxHeap heap(values, n);
    heap.printHeap();
    return 0;
}
