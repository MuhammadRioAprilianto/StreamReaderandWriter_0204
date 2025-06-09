#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "selamat Belajar di Prodi TI UMY" << endl;
        throw 3.5; //melempar sebuah integer, maka
        cout << "Pernyataan tidak dapat dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << a << " : Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}