#include <string>
#include <iostream>
using namespace std;

using namespace std;
class thanhvien
{
private: //thuoc tinh
    int matv, cccd;
    string tentv, ngaysinh;

public:
    virtual void nhap()
    {
        cout << "Nhap ten thanh vien: ";
        cin.ignore();
        getline(cin, tentv);
        cout << "Nhap CCCD: ";
        cin >> cccd;
        cout << "Nhap ma thanh vien: ";
        cin >> matv;
        cout << "Nhap ngay sinh: ";
        cin.ignore();
        getline(cin, ngaysinh);
    }

    virtual void xuat()
    {
        cout << "\t Ten thanh vien: " << tentv << endl;
        cout << "\t Ma thanh vien:  " << matv << endl;
        cout << "\t CCCD: " << cccd << endl;
        cout << "\t Ngay sinh: " << ngaysinh << endl;
        
    }
};