#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris; //membuat variable baring
    ofstream outfile; //membuat objek output file stream
    outfile.open("contohfile.txt"); //membuka file yang telah dibuat untuk ditulisi
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
}