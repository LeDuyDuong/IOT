#include <iostream>
#include <math.h>
using namespace std;

class CPhanSo {
    private:
    float tu, mau;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CPhanSo&); //Phuong thuc khoi tao sao chep
    CPhanSo(); //Phuong thuc thiet lap mac dinh
    CPhanSo(float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CPhanSo(const CPhanSo&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuong thuc nhap
    friend istream& operator>>(istream& , CPhanSo&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CPhanSo&); //Toan tu xuat
    float getTu(); //Phuong thuc cung cap tu so
    float getMau(); //Phuong thuc cung cap mau so
    //Phuong thuc cap nhat thong tin
    CPhanSo& operator=(const CPhanSo&); //Toan tu gan        
    void setTu(float); //Phuong thuc cap nhat tu so
    void setMau(float); //Phuong thuc cap nhat mau so
    //Phuong thuc kiem tra tong quat
    int isBangKhong(); //Kiem tra hai phan so bang 0
    int isBang( const CPhanSo&); // Kiem tra hai phan so bang nhau
    int isKhongBang( const CPhanSo&); //Kiem tra hai phan so khac nhau
    //Phuong thuc kiem tra so sanh
    int operator==(const CPhanSo&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(const CPhanSo&); //Toan tu so sanh khac
    int operator>(const CPhanSo&); //Toan tu so sanh lon hon
    int operator<(const CPhanSo&); //Toan tu so sanh nho hon
    int operator>=(const CPhanSo&); //Toan tu so sanh lon hon hoac bang
    int operator<=(const CPhanSo&); //Toan tu so sanh nho hon hoac bang
    // Phuong thuc kiem tra 
    CPhanSo operator+(CPhanSo &); // Toan tu cong
    CPhanSo operator-(CPhanSo &); // Toan tu tru
    CPhanSo operator*(CPhanSo &); // Toan tu cong
    CPhanSo operator/(CPhanSo &); // Toan tu chia
    CPhanSo operator+=(int); // Toan tu cong don
    CPhanSo operator-=(int); // Toan tu tru don
    CPhanSo operator*=(int); // Toan tu nhan don
    CPhanSo operator/=(int); // Toan tu chia don 
    //Phuong thuc pha huy
    ~CPhanSo(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CPhanSo::KhoiTao(){
    tu=0;
    mau=0;
}

//Phuong thuc khoi tao khi biet day du thong tinh
void CPhanSo::KhoiTao(float ttu, float mmau){
    tu=ttu;
    mau=mmau;
}

//Phuong thuc khoi tao sao chep
void CPhanSo::KhoiTao(const CPhanSo&P){
    tu=P.tu;
    mau=P.mau;
}

//Phuong thuc thiet lap mac dinh
CPhanSo::CPhanSo(){
    tu=0;
    mau=0;
}

//Phuong thuc thiet lap khi biet day du thong tin
CPhanSo::CPhanSo(float ttu, float mmau){
    tu=ttu;
    mau=mmau;
}

//Phuong thuc thiet lap sao chep
CPhanSo::CPhanSo(const CPhanSo&P){
    tu=P.tu;
    mau=P.mau;
}

//Phuong thuc nhap
void CPhanSo::Nhap(){
    cout<<"Nhap tu:";
    cin>>tu;
    cout<<"Nhap mau:";
    cin>>mau;
}

//Toan tu nhap
istream& operator>>(istream&is ,CPhanSo&P ){
    cout<<"Nhap tu:";
    is>>P.tu;
    cout<<"Nhap mau:";
    is>>P.mau;
    return is;
} 

//Phuong thuc xuat
void CPhanSo::Xuat(){
    cout<<tu<<"/"<<mau;
}

//Toan tu xuat
ostream& operator<<(ostream&os, CPhanSo&P){
    os<<P.tu<<"/"<<P.mau;
    return os;
}

//Phuong thuc cung cap tu so
float CPhanSo::getTu(){
    return tu;
}
//Phuong thuc cung cap mau so
float CPhanSo::getMau(){
    return mau;
}

//Toan tu gan  
CPhanSo& CPhanSo::operator=(const CPhanSo&P){
    tu=P.tu;
    mau=P.mau;
    return *this;
}

//Phuong thuc cap nhat tu so
void CPhanSo::setTu(float ttu){
    tu=ttu;
}

//Phuong thuc cap nhat mau so
void CPhanSo::setMau(float mmau){
    mau=mmau;
}

//Kiem tra hai phan so bang khong 
int CPhanSo::isBangKhong(){
    if(tu==0)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so bang nhau
int CPhanSo::isBang(const CPhanSo&P){
    if(tu==P.tu & mau==P.mau)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so khong bang
int CPhanSo::isKhongBang(const CPhanSo&P){
    if(tu!=P.tu & mau!=P.mau)
       return 1;
    else 
       return 0;
}


int CPhanSo::operator>(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator<(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator<=(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<=0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator>=(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>=0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator!=(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)!=0)
       return 1;
    else
       return 0;
}

int CPhanSo::operator==(const CPhanSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)==0)
       return 1;
    else
       return 0;
}

CPhanSo CPhanSo::operator+(CPhanSo &x){
    CPhanSo temp;
    temp.tu=tu*x.mau+x.tu*mau;
    temp.mau=mau*x.mau;
    return temp;
}

CPhanSo CPhanSo::operator-(CPhanSo &x){
    CPhanSo temp;
    temp.tu=tu*x.mau-x.tu*mau;
    temp.mau=mau*x.mau;
    return temp;
}

CPhanSo CPhanSo::operator*(CPhanSo &x){
    CPhanSo temp;
    temp.tu=tu*x.tu;
    temp.mau=mau*x.mau;
    return temp;
}

CPhanSo CPhanSo::operator/(CPhanSo &x){
    CPhanSo temp;
    temp.tu=tu*x.mau;
    temp.mau=mau*x.tu;
    return temp;
}

CPhanSo CPhanSo::operator+=(int phanso){
    CPhanSo temp;
    temp.tu=tu+mau*(phanso);
    temp.mau=mau;
    return temp;
}

CPhanSo CPhanSo::operator-=(int phanso){
    CPhanSo temp;
    temp.tu=tu-mau*(phanso);
    temp.mau=mau;
    return temp;
}


CPhanSo CPhanSo::operator*=(int phanso){
    CPhanSo temp;
    temp.tu=tu*phanso;
    temp.mau=mau;
    return temp;
}

CPhanSo CPhanSo::operator/=(int phanso){
    CPhanSo temp;
    temp.mau=mau*phanso;
    temp.tu=tu;
    return temp;
}

CPhanSo::~CPhanSo(){
    return;
}

int main(){
    CPhanSo a,b,c,kq;
    a.Nhap();
    b.Nhap();
    if(a>b)
        cout<<" a lon hon b"<<endl;
    if(a<b) 
        cout<<" a nho hon b"<<endl;
    if(a==b)
        cout<<" a bang b"<<endl;
    if(a!=b)
        cout<<" a khac b"<<endl;
    if(a>=b)
        cout<<" a lon hon va bang b"<<endl;
    if(a<=b)
        cout<<" a nho hon va bang b"<<endl;
    kq=a+b;
    cout<<"\na+b: ";
    kq.Xuat();
    kq=a-b;
    cout<<"\na-b: ";
    kq.Xuat();
    kq=a*b;
    cout<<"\na*b: ";
    kq.Xuat();
    kq=a/b;
    cout<<"\na/b: ";
    kq.Xuat();
    kq=(a+=2);
    cout<<"\na+=2: ";
    kq.Xuat();
    kq=(a-=2);
    cout<<"\na-=2: ";
    kq.Xuat();
    kq=(a*=2);
    cout<<"\na*=2: ";
    kq.Xuat();
    kq=(a/=2);
    cout<<"\na/=2: ";
    kq.Xuat();
    cout<<" "<<endl;
    c=a;
    c.Xuat();
    cout<<" "<<endl;
    CPhanSo PS1;
    CPhanSo PS2(8,-9);
    CPhanSo PS3(PS2);
    cout<<PS1<<endl;
    cout<<PS2<<endl;
    cout<<PS3<<endl;
    return 0;
}