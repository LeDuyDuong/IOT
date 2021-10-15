#include <iostream>
#include <math.h>
using namespace std;

class CDuongThang {
    private:
    int a,b;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CDuongThang&); //Phuong thuc khoi tao sao chep
    CDuongThang(); //Phunong thuc thiet lap mac dinh
    CDuongThang(float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CDuongThang(const CDuongThang&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuog thuc nhap
    friend istream& operator>>(istream& , CDuongThang&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CDuongThang&); //Toan tu xuat
    float getA(); //Phuong thuc cung cap A
    float getB(); //Phuong thuc cung cap B
    //Phuong thuc cap nhat thong tin
    CDuongThang& operator=(const CDuongThang&); //Toan tu gan        
    void setA(float); //Phuong thuc cap nhat A
    void setB(float); //Phuong thuc cap nhat B
    //Phuong thuc kiem tra tong quat
    int isBangKhong();
    int isBang( const CDuongThang&); // Kiem tra hai don thuc bang nhau
    int isKhongBang( const CDuongThang&); //Kiem tra hai don thuc khong bang
    //Phuong thuc kiem tra so sanh
    int operator==(const CDuongThang&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(const CDuongThang&); //Toan tu  so sanh khac
    //Phuong thuc pha huy
    ~CDuongThang(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CDuongThang::KhoiTao(){
    a=0;
    b=0;
}

//Phuong thuc khoi tao khi biet day du thong tinh
void CDuongThang::KhoiTao(float aa, float bb){
    a=aa;
    b=bb;
}

//Phuong thuc khoi tao sao chep
void CDuongThang::KhoiTao(const CDuongThang&P){
    a=P.a;
    b=P.b;
}

//Phuong thuc thiet lap mac dinh
CDuongThang::CDuongThang(){
    a=0;
    b=0;
}

//Phuong thuc thiet lap khi biet day du thong tin
CDuongThang::CDuongThang(float aa, float bb){
    a=aa;
    b=bb;
}

//Phuong thuc thiet lap sao chep
CDuongThang::CDuongThang(const CDuongThang&P){
    a=P.a;
    b=P.b;
}
//Phuong thuc nhap
void CDuongThang::Nhap(){
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
}

//Toan tu nhap
istream& operator>>(istream&is ,CDuongThang&P ){
    cout<<"Nhap a:";
    is>>P.a;
    cout<<"Nhap b:";
    is>>P.b;
    return is;
}

//Phuong thuc xuat
void CDuongThang::Xuat(){
    cout<<a<<"x+("<<b<<")";
}

//Toan tu xuat
ostream& operator<<(ostream&os, CDuongThang&P){
    os<<P.a<<"x+("<<P.b<<")";
    return os;
}

//Phuong thuc cung cap so thuc
float CDuongThang::getA(){
    return a;
}

//Phuong thuc cung cap so ao
float CDuongThang::getB(){
    return b;
}

//Toan tu gan  
CDuongThang& CDuongThang::operator=(const CDuongThang&P){
    a=P.a;
    b=P.b;
    return *this;
}

//Phuong thuc cap nhat tu so
void CDuongThang::setA(float aa){
    a=aa;
}

//Phuong thuc cap nhat mau so
void CDuongThang::setB(float bb){
    b=bb;
}

//Kiem tra hai phan so bang khong 
int CDuongThang::isBangKhong(){
    if(a==0 & b==0)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so bang nhau
int CDuongThang::isBang(const CDuongThang&P){
    if(a==P.a & b==P.b)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so khong bang
int CDuongThang::isKhongBang(const CDuongThang&P){
    if(a!=P.a & b!=P.b)
       return 1;
    else 
       return 0;
}

int CDuongThang::operator==(const CDuongThang &x){
    if(a==x.a && b==x.b )
        return 1;
    else 
        return 0;
}

int CDuongThang::operator!=(const CDuongThang &x){
    if(a!=x.a && b!=x.b )
        return 1;
    else 
        return 0;
}

CDuongThang::~CDuongThang(){
    return;
}

int main(){
    
}


