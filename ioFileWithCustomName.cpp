#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void ReadandWriteFile(string format){
    string baris; //membuat variable baring
    string namefile;

    cout << "Masukkan Name File = " << endl;
    cin >> namefile;
    cin.ignore();

    ofstream outfile; //membuat objek output file stream
    outfile.open(namefile + format); //membuka file yang telah dibuat untuk ditulisi
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- "; 
        getline(cin, baris); //mendapatkan setiap karater dalam satu baris
        if (baris == "q") break; //jika memasukkan karakter q maka loop akan berhenti
        outfile << baris << endl;
    }
    outfile.close(); //menutup file

    //membuat objek input file stream
    ifstream infile;
    infile.open(namefile + format); // membuka file yang akan dituliskan 
    cout << endl << ">= Membuka dan membaca file " << endl;

    //jika file ada maka
    if (infile.is_open())
    {
        while (getline(infile, baris)) //melakukan perulangan setiap baris
        {
            cout << baris << '\n';
        }
        infile.close(); //menutup file
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
};

int main(){
    int choice;
    cout << "1. File Format csv" << endl;
    cout << "2. File Format txt" << endl;
    cout << "3. keluar" << endl;
    cout << "Pilih format file : ";
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
    case 1:
        ReadandWriteFile("csv");
        break;
    case 2:
        ReadandWriteFile("txt");
        break;
    case 3:
        cout << "keluar dari program" << endl;
    default:
        cout << "pilihan tidak valid" << endl;
        break;
        return 0;
    }
}