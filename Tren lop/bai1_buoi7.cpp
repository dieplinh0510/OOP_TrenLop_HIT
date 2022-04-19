#include <bits/stdc++.h>
using namespace std;
class PHANSO
{
private:
    int ts;
    int ms;
public:
    void Nhap();
    void Xuat();
    PHANSO operator +(PHANSO X);
    PHANSO operator -();
};
PHANSO PHANSO::operator+(PHANSO X)
{
    PHANSO Y
    Y.ts = this->ts+X.ts;
    Y.ms = this->ms+X.ms;
    return Y;
}
PHANSO PHANSO::operator-()
{
    Y.ts = -this->ts;
    Y.ms = -this->ms;
    return Y;
}
int main()
{
    PHANSO
    return 0;
}
