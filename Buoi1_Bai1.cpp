#include <iostream>

using namespace std;

class SP {
    public:
        double thuc, ao;
        SP() {} 
        SP(double thuc, double ao): thuc(thuc), ao(ao) {}
};

istream& operator>>(istream &is, SP &c) 
{
    is >> c.thuc >> c.ao;
}

ostream& operator<<(ostream &os, const SP &c) 
{
    os << c.thuc << "+" << c.ao << "i";
}

int main() {
    SP a, b;
    cout << "Nhap vao phan thuc va phan ao cua so phuc thu nhat: ";
    cin >> a;
    cout << "Nhap vao phan thuc va phan ao cua so phuc thu hai: ";
    cin >> b;
    cout << a << endl;
	cout << b << endl;
    return 0;
}

