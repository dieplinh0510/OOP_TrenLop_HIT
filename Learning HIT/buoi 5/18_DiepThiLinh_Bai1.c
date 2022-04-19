#include<bits/stdc++.h>
using namespace std;
class SINHVIEN
{
private:
    char ma[15];
    char hoTen[30];
    char ngayThang[30];
    char gioiTinh[10];
    float diem;
    char xepLoai[10];
public:
    SINHVIEN();
    SINHVIEN(char ma, char hoTen, char ngayThang, char gioiTinh, float diem, char xepLoai);
    ~SINHVIEN();
    char Getma()
    {
        return ma;
    }
    char GethoTen()
    {
        return hoTen;
    }
    char GetngayThang()
    {
        return ngayThang;
    }
    char GetgoiTinh()
    {
        return gioiTinh;
    }
    float Getdiem()
    {
        return diem;
    }
    char GetxepLoai()
    {
        return xepLoai;
    }

    void Setma(char ma)
    {
        this->strcpy(ma,ma);
    }
    void SethoTen(char hoTen)
    {
        this->strcpy(hoTen,hoTen);
    }
    void SetngayThang(char ngayThang)
    {
        this->strcpy(ngayThang,ngayThang);
    }
    void SetgioiTinh(char gioiTinh)
    {
        this->strcpy(gioiTinh,gioiTinh);
    }
    void Setdiem(float diem)
    {
        this->diem=diem;
    }
    void SetxepLoai(char xepLoai)
    {
        this->strcpy(xepLoai,xepLoai);
    }
};


int main()
{
    SINHVIEN sv;

    return 0;
}
