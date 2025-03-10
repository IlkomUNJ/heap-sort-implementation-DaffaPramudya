# MaxHeap Implementation in C++

## Fitur
- Membangun Max Heap dari array yang diberikan.
- Menampilkan setiap langkah heapification selama proses pembentukan heap.
- Mencetak heap akhir setelah semua elemen terurut sesuai aturan Max Heap.

## Struktur Kode
Kode terdiri dari kelas `MaxHeap` yang memiliki:
1. **Constructor**: Membangun Max Heap dari array input.
2. **maxHeapify**: Fungsi rekursif untuk menjaga properti Max Heap.
3. **printStep**: Fungsi untuk mencetak setiap langkah proses heapification.
4. **printHeap**: Fungsi untuk mencetak hasil akhir Max Heap.

## Cara Kompilasi dan Eksekusi
### Persyaratan
- Compiler C++ (misalnya, g++)

### Langkah-langkah Kompilasi
1. Simpan kode dalam file, misalnya `max_heap.cpp`.
2. Buka terminal atau command prompt, lalu navigasikan ke direktori tempat file disimpan.
3. Jalankan perintah berikut untuk mengompilasi:
   ```sh
   g++ -o hw1 hw1.cpp
   ```
4. Jalankan program dengan perintah:
   ```sh
   ./hw1
   ```

## Contoh Output
```
Initial array: 100 5 9 6 8 20 10 12 18 9
Heapify step: 100 5 9 18 8 20 10 12 6 9
Heapify step: 100 8 9 18 5 20 10 12 6 9
Heapify step: 100 18 9 12 8 20 10 5 6 9
Heapify step: 100 18 20 12 8 9 10 5 6 9
Final Max Heap: 100 18 20 12 8 9 10 5 6 9
```

