#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class phanso
{
private:
    float tuso, mauso;
public:
    phanso();
    phanso(float a, float b);
    phanso operator*(phanso Q);
    float operator--();
friend istream& operator>>(istream& x, phanso &y);
friend ostream& operator<<(ostream& x, phanso y);
};
phanso::phanso()
{
    tuso=1;
    mauso=1;
}
phanso::phanso(float a, float b)
{
    tuso=a;
    mauso=b;
}
phanso phanso::operator*(phanso Q)
{
    phanso K;
    K.tuso= tuso * Q.tuso;
    K.mauso= mauso * Q.mauso;
    return K;
}
float phanso::operator--()
{
    return tuso/mauso;
}
istream& operator>>(istream& x, phanso &y)
{
    cout << "tu so= "; x>>y.tuso;
    cout << "mau so= "; x>>y.mauso;
    return x;
}
ostream& operator<<(ostream& x, phanso y)
{
    x << y.tuso << "/" << y.mauso << endl;
    return x;
}
int main()
{
    phanso P,Q;
    cout << "phan so P" << endl;
    cin >> P ;
    cout << "phan so Q" << endl;
    cin >> Q;
    phanso K=P*Q;
    ofstream ofs("PHANSO.txt");
    ofs << "tich cua 2 phan so la: " << K ;
    ofs << "gia tri cua phan so la: " << --K ;
    ofs.close();
    return 0;
}
