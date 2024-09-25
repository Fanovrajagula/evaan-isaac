//Menampilkan deret bilangan kelipatan 6, yang batas awal dan akhirnya diinputkan oleh user!
#include <iostream>
int main() {
    int start, end;
    std::cout << "Masukan Nilai Awal: ";
    std::cin >> start;
    
    std::cout << "Masukan Nilai Akhir: ";
    std::cin >> end;
   
    for (int i = start; i <= end; i++) {
        if (i % 6 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
