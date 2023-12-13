#include<locale.h>
#include <iostream>
using namespace std;

// Emirhan yıldız 
// 231030086

int main() {
    setlocale(LC_ALL, "Turkish");

    int vize, final, odev, ort;

    cout << "Vize Notunuzu Giriniz: ";
    cin >> vize;

    cout << "Final Notunuzu Giriniz: ";
    cin >> final;

    cout << "Ödev Notunuzu Giriniz: ";
    cin >> odev;

    if (vize < 0 || vize > 100 || final < 0 || final > 100 || odev < 0 || odev > 100) {
        cout << "0 İLE 100 ARASI NOT GİRİNİZ" << endl;
    }

    else {
        ort = vize * 0.3 + final * 0.4 + odev * 0.3;
        cout << "Ortalama : " << ort << endl;

        if (ort > 90)
            cout << "AA İLE GEÇTİNİZ" << endl;
        else if (ort > 85)
            cout << "BA İLE GEÇTİNİZ" << endl;
        else if (ort > 80)
            cout << "BB İLE GEÇTİNİZ" << endl;
        else if (ort > 70)
            cout << "CB İLE GEÇTİNİZ" << endl;
        else if (ort > 60)
            cout << "CC İLE GEÇTİNİZ" << endl;
        else if (ort > 55)
            cout << "DC İLE GEÇTİNİZ" << endl;
        else if (ort > 50)
            cout << "DD İLE GEÇTİNİZ" << endl;
        else
            cout << "FF İLE KALDINIZ" << endl;
    }
    system("PAUSE");
    return 0;
}