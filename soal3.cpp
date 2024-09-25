//Mika memiliki 7 toples permen, dengan jumlah yang berbeda-beda. Mika ingin menghitung berapa total permen yang dia miliki.
Buatlah program yang meminta mika memasukkan jumlah permen di setiap toples dan menghitung jumlah permen yang ada!
#include <iostream>
int main() {
    int totaltoples;
    int totalpermen = 0;
    std::cin >> totaltoples;
    for (int i = 0; i < totaltoples; i++) {
        int permentoples;
        std::cout << "Jumlah Permen dalam Toples" << (i + 1) << ": ";
        std::cin >> permentoples;
        totalpermen += permentoples;
    }
    // output total permen
    std::cout << "Total Permen: " << totalpermen << std::endl;
    return 0;
}
