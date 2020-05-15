//
//  main.cpp
//  toko-canggih
//
//  Created by Proxima Centauri on 15/05/20.
//  Copyright © 2020 Infinite Devsign. All rights reserved.
//

#include <iostream>

using namespace std;

string products[5][2] = {
    {
        "Sabun",
        "2500"
    }, {
        "Beras",
        "10000"
    }, {
        "Mie",
        "2500"
    }, {
        "Shampoo",
        "5000"
    }, {
        "Kecap",
        "1500"
    }
};

int productCount() {
    return sizeof(products)/sizeof(products[0]);
}

int main() {
    cout << "Selamat datang di Toko Canggih" << endl << "Untuk memilih barang pilih dengan nomor urut!" << endl;
    cout << "=========================================" << endl;
    for (int i = 0; i < productCount(); i++) {
        cout << i+1 << ". ";
        cout << products[i][0] << " ";
        cout << "Harga: Rp. " << products[i][1] << endl;
    }
    cout << "=========================================" << endl;
    
    int choose;
    int amount;
    
    cout << "Pilih nomor barang: ";
    cin >> choose;
    cout << "Jumlah barang: ";
    cin >> amount;
    
    cout << endl << "Beli " << amount << " " << products[choose-1][0];
    cout << " Total belanja Rp." << stoi(products[choose-1][1]) * amount << endl;
    
    return 0;
}
