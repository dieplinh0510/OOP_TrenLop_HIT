#include<bits/stdc++.h>
using namespace std;
int n;
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
    SINHVIEN(char *ma, char *hoTen, char *ngayThang, char *gioiTinh, float diem, char *xepLoai);
    ~SINHVIEN();
   friend void Xuats(SINHVIEN *sv, int n);
    char *GetMa()
    {
        return ma;
    }
    char *GetHoTen()
    {
        return hoTen;
    }
    char *GetNgayThang()
    {
        return ngayThang;
    }
    char *GetGioiTinh()
    {
        return gioiTinh;
    }
    float GetDiem()
    {
        return diem;
    }
    char *GetXepLoai()
    {
        return xepLoai;
    }

    void SetMa(char *ma)
    {
        strcpy(this->ma, ma);
    }
    void SetHoTen(char *hoTen)
    {
        strcpy(this->hoTen, hoTen);
    }
    void SetNgayThang(char *ngayThang)
    {
        strcpy(this->ngayThang,ngayThang);
    }
    void SetGioiTinh(char *gioiTinh)
    {
        strcpy(this->gioiTinh,gioiTinh);
    }
    void SetDiem(float diem)
    {
        this->diem=diem;
    }
    void SetXepLoai(char *xepLoai)
    {
        strcpy(this->xepLoai,xepLoai);
    }
};

SINHVIEN::SINHVIEN()
{
    strcpy(this->ma, "");
    strcpy(this->hoTen, "");
    strcpy(this->ngayThang, "");
    strcpy(this->gioiTinh, "");
    this->diem=0;
    strcpy(this->xepLoai, "");
}

SINHVIEN::SINHVIEN(char *ma, char *hoTen, char *ngayThang, char *gioiTinh, float diem, char *xepLoai)
{
    strcpy(this->ma, ma);
    strcpy(this->hoTen, hoTen);
    strcpy(this->ngayThang,ngayThang);
    strcpy(this->gioiTinh,gioiTinh);
    this->diem=diem;
    strcpy(this->xepLoai,xepLoai);
}

SINHVIEN::~SINHVIEN()
{
    strcpy(this->ma, "");
    strcpy(this->hoTen, "");
    strcpy(this->ngayThang, "");
    strcpy(this->gioiTinh, "");
    this->diem=0;
    strcpy(this->xepLoai, "");
}
void Nhap(SINHVIEN &sv)
{
    char temp[30];
    float temp1;
    cout<<"Nhap ma: "; fflush(stdin); gets(temp);  sv.SetMa(temp);
    cout<<"Nhap ho ten: "; fflush(stdin); gets(temp);  sv.SetHoTen(temp);
    cout<<"Nhap ngay thang: "; fflush(stdin); gets(temp);  sv.SetNgayThang(temp);
    cout<<"Nhap gioi tinh: "; fflush(stdin); gets(temp);  sv.SetGioiTinh(temp);
    cout<<"Nhap diem: "; cin>>temp1; sv.SetDiem(temp1);
    cout<<"Nhap xep loai: "; fflush(stdin); gets(temp);  sv.SetXepLoai(temp);
}

void Xuat(SINHVIEN sv)
{
    cout<<left<<setw(15)<<sv.GetMa()<<setw(15)<<sv.GetHoTen()<<setw(15)<<sv.GetNgayThang()<<setw(15)<<sv.GetGioiTinh()<<setw(15)<<sv.GetDiem()<<setw(15)<<sv.GetXepLoai()<<endl;
}

void Xuats(SINHVIEN *sv, int n)
{


    for (int i=0; i<n; i++)
    {
        if (strcmp(sv[i].xepLoai, "Tot")==0)
        {
            Xuat(sv[i]);
        }
    }
}
int main()
{
    int n;
    cout<<"Nhap so sinh vien: "; cin>>n;
    SINHVIEN *sv= new SINHVIEN [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap thong tin sinh vien thu: "<<i+1<<endl;
        Nhap(sv[i]);
    }
    cout<<left<<setw(15)<<"Ma sv"<<setw(15)<<"Ho ten"<<setw(15)<<"Ngay thang"<<setw(15)<<"Gioi tinh"<<setw(15)<<"Diem"<<setw(15)<<"Xep loai"<<endl;
    for (int i=0; i<n; i++)
    {
        Xuat(sv[i]);
    }

    cout<<"Nhung sinh vien co dao duc tot: "<<endl;
    cout<<left<<setw(15)<<"Ma sv"<<setw(15)<<"Ho ten"<<setw(15)<<"Ngay thang"<<setw(15)<<"Gioi tinh"<<setw(15)<<"Diem"<<setw(15)<<"Xep loai"<<endl;
    Xuats(sv,n);
    return 0;
}
