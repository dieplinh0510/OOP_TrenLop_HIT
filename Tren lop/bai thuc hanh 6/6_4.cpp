#include <bits/stdc++.h>
using namespace std;
class ELECTRONIC
{
protected:
    int congSuat;
    int dienAp;
public:
    ELECTRONIC(int congSuat, int dienAp);
};

class MAYGIAT : protected ELECTRONIC
{
private:
    float dungTich;
    char loai[20];
public:
    MAYGIAT(int congSuat, int dienAp, float dungTich, char* loai);
    void Xuat();
};

class TULANH : protected ELECTRONIC
{
private:
    int dungTich;
    int soNgan;
public:
    TULANH(int congSuat, int dienAp, int dungTich, int soNgan);
    void Xuat();
};

ELECTRONIC::ELECTRONIC(int a, int b)
{
    congSuat= a;
    dienAp=b;
}

MAYGIAT::MAYGIAT(int a, int b, float c, char* d) : ELECTRONIC(a,b)
{
    dungTich = c;
    strcpy(loai, d);
}

TULANH::TULANH(int a, int b, int e, int f): ELECTRONIC(a, b)
{
    dungTich = e;
    soNgan = f;
}
void MAYGIAT::Xuat()
{
    cout<<setw(20)<<congSuat<<setw(20)<<dienAp<<setw(20)<<dungTich<<setw(20)<<loai<<endl;
}

void TULANH::Xuat()
{
    cout<<setw(20)<<congSuat<<setw(20)<<dienAp<<setw(20)<<dungTich<<setw(20)<<soNgan<<endl;
}
int main()
{
    MAYGIAT a(1, 2, 3.0, "u");
    cout<<setw(20)<<"Cong suat"<<setw(20)<<"Dien ap"<<setw(20)<<"Dung tich"<<setw(20)<<"Loai"<<endl;
    a.Xuat();
    TULANH b(1, 2, 3, 4);
    cout<<setw(20)<<"Cong suat"<<setw(20)<<"Dien ap"<<setw(20)<<"Dung tich"<<setw(20)<<"So ngan"<<endl;
    b.Xuat();
    return 0;
}
