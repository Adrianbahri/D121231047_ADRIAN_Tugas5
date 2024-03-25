#include <bits/stdc++.h>
using namespace std;

int main(){   
        int pokok, tambahan, keluarga, penghasilan;
        cout << "masukkan pendapatan pokok anda :" << "\n";
        cin >> pokok;
        cout << "masukkan pendapatan tambahan anda :" << "\n";
        cin >> tambahan;
        cout << "masukkan pendapatan keluarga anda(suami/istri):" << "\n";
        cin >> keluarga;

        penghasilan = pokok + (tambahan / 2) + (keluarga / 3);

        if(penghasilan >= 100000){
            cout <<  "ANDA MENDAPATKAN KREDIT VESPA" << "\n";
        } else if (penghasilan < 100000 && penghasilan > 50000 ) {
            cout <<  "ANDA MENDAPATKAN KREDIT HONDA" << "\n";
        } else {
            cout <<  "ANDA TIDAK BERHAK MENDAPATKAN KREDIT" << "\n";
        }
        
    return 0;
}