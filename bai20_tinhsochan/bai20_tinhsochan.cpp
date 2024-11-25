#include <iostream>
using namespace std;
int main() {

    cout << "cac so tu 1 den:\n ";
    int so, tongchan = 0, tongle = 0, tong = 0;
    cout << "nhap so: "; cin >> so;
    for (int i = 1; i < so; i++)
    {
        tong += i;
        if (i % 2 == 0)
        {
            cout << i << " ";
            tongchan += i;
        }else{
        tongle += i;
    }
}
cout << "\ntong cac so chan: " << tongchan;
cout << "\ntong cac so le: " << tongle;
cout << "\ntong: " << tong;

return 0;
}