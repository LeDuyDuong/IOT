#include <iostream>
#include <math.h>
using namespace std;

class CDonThuc {
    private:
    int a,b;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CDonThuc&); //Phuong thuc khoi tao sao chep
    CDonThuc(); //Phunong thuc thiet lap mac dinh
    CDonThuc(float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CDonThuc(const CDonThuc&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuog thuc nhap
    friend istream& operator>>(istream& , CDonThuc&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CDonThuc&); //Toan tu xuat
    float getA(); //Phuong thuc cung cap A
    float getB(); //Phuong thuc cung cap B
    //Phuong thuc cap nhat thong tin
    CDonThuc& operator=(const CDonThuc&); //Toan tu gan        
    void setA(float); //Phuong thuc cap nhat A
    void setB(float); //Phuong thuc cap nhat B
    //Phuong thuc kiem tra tong quat
    int isBangKhong();
    int isBang( const CDonThuc&); // Kiem tra hai don thuc bang nhau
    int isKhongBang( const CDonThuc&); //Kiem tra hai don thuc khong bang
    //Phuong thuc kiem tra so sanh
    int operator==(const CDonThuc&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(const CDonThuc&); //Toan tu  so sanh khac
    int operator>(const CDonThuc&); //Toan tu so sanh lon hon
    int operator<(const CDonThuc&); //Toan tu so sanh nho hon
    int operator>=(const CDonThuc&); //Toan tu so sanh lon hon hoac bang
    int operator<=(const CDonThuc&); //Toan tu so sanh nho hon hoac bang
    // Phuong thuc kiem tra 
    CDonThuc operator*(CDonThuc &); // Toan tu cong
    CDonThuc operator/(CDonThuc &); // Toan tu chia
    CDonThuc operator*=(int); // Toan tu nhan don
    CDonThuc operator/=(int); // Toan tu chia don
    //Phuong thuc pha huy
    ~CDonThuc(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CDonThuc::KhoiTao(){
    a=0;
    b=0;
}

//Phuong thuc khoi tao khi biet day du thong tinh
void CDonThuc::KhoiTao(float aa, float bb){
    a=aa;
    b=bb;
}

//Phuong thuc khoi tao sao chep
void CDonThuc::KhoiTao(const CDonThuc&P){
    a=P.a;
    b=P.b;
}

//Phuong thuc thiet lap mac dinh
CDonThuc::CDonThuc(){
    a=0;
    b=0;
}

//Phuong thuc thiet lap khi biet day du thong tin
CDonThuc::CDonThuc(float aa, float bb){
    a=aa;
    b=bb;
}

//Phuong thuc thiet lap sao chep
CDonThuc::CDonThuc(const CDonThuc&P){
    a=P.a;
    b=P.b;
}
//Phuong thuc nhap
void CDonThuc::Nhap(){
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
}

//Toan tu nhap
istream& operator>>(istream&is ,CDonThuc&P ){
    cout<<"Nhap a:";
    is>>P.a;
    cout<<"Nhap b:";
    is>>P.b;
    return is;
}

//Phuong thuc xuat
void CDonThuc::Xuat(){
    cout<<a<<"x^("<<b<<")";
}

//Toan tu xuat
ostream& operator<<(ostream&os, CDonThuc&P){
    os<<P.a<<"x^("<<P.b<<")";
    return os;
}

//Phuong thuc cung cap so thuc
float CDonThuc::getA(){
    return a;
}

//Phuong thuc cung cap so ao
float CDonThuc::getB(){
    return b;
}

//Toan tu gan  
CDonThuc& CDonThuc::operator=(const CDonThuc&P){
    a=P.a;
    b=P.b;
    return *this;
}

//Phuong thuc cap nhat tu so
void CDonThuc::setA(float aa){
    a=aa;
}

//Phuong thuc cap nhat mau so
void CDonThuc::setB(float bb){
    b=bb;
}

//Kiem tra hai phan so bang khong 
int CDonThuc::isBangKhong(){
    if(a==0)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so bang nhau
int CDonThuc::isBang(const CDonThuc&P){
    if(a==P.a & b==P.b)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so khong bang
int CDonThuc::isKhongBang(const CDonThuc&P){
    if(a!=P.a & b!=P.b)
       return 1;
    else 
       return 0;
}

int CDonThuc::operator==(const CDonThuc &x){
    if(a==x.a && b==x.b )
        return 1;
    else 
        return 0;
}

int CDonThuc::operator!=(const CDonThuc &x){
    if(a!=x.a && b!=x.b )
        return 1;
    else 
        return 0;
}

int CDonThuc::operator>(const CDonThuc &x){
    if(a>x.a && b>x.b )
        return 1;
    else 
        return 0;
}

int CDonThuc::operator<(const CDonThuc &x){
    if(a<x.a && b<x.b )
        return 1;
    else 
        return 0;
}

int CDonThuc::operator>=(const CDonThuc &x){
    if(a>=x.a && b>=x.b )
        return 1;
    else 
        return 0;
}

int CDonThuc::operator<=(const CDonThuc &x){
    if(a<=x.a && b<=x.b )
        return 1;
    else 
        return 0;
}


CDonThuc CDonThuc::operator*(CDonThuc &x){
    CDonThuc temp;
    temp.a=a*x.a;
    temp.b=b+x.b;
    return temp;
}

CDonThuc CDonThuc::operator/(CDonThuc &x){
    CDonThuc temp;
    temp.a=a/x.a;
    temp.b=b-x.b;
    return temp;
}

CDonThuc CDonThuc::operator*=(int x){
    CDonThuc temp;
    temp.a=a*x;
    temp.b=b;
    return temp;
}

CDonThuc CDonThuc::operator/=(int x){
    CDonThuc temp;
    temp.a=a/x;
    temp.b=b;
    return temp;
}

CDonThuc::~CDonThuc(){
    return;
}

int main(){
    CDonThuc a,b;
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
}   