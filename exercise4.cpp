#include <iostream>
#include <math.h>
using namespace std;

class CHonSo{
    private:
    float tu, mau, nguyen;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float, float ); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CHonSo&); //Phuong thuc khoi tao sao chep
    CHonSo(); //Phuong thuc thiet lap mac dinh
    CHonSo(float, float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CHonSo(const CHonSo&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuong thuc nhap
    friend istream& operator>>(istream& , CHonSo&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CHonSo&); //Toan tu xuat
    float getTu(); //Phuong thuc cung cap tu so
    float getMau(); //Phuong thuc cung cap mau so
    float getNguyen(); //Phuong thuc cung cap phan nguyen
    //Phuong thuc cap nhat thong tin
    CHonSo& operator=(const CHonSo&); //Toan tu gan        
    void setTu(float); //Phuong thuc cap nhat tu so
    void setMau(float); //Phuong thuc cap nhat mau so
    void setNguyen(float); //Phuong thuc cap nhat phan nguyen
    //Phuong thuc kiem tra tong quat
    int isBangKhong(); //Kiem tra hai phan so bang 0
    int isBang( const CHonSo&); // Kiem tra hai phan so bang nhau
    int isKhongBang( const CHonSo&); //Kiem tra hai phan so khac nhau
    //Phuong thuc kiem tra so sanh
    int operator==(const CHonSo&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(const CHonSo&); //Toan tu so sanh khac
    int operator>(const CHonSo&); //Toan tu so sanh lon hon
    int operator<(const CHonSo&); //Toan tu so sanh nho hon
    int operator>=(const CHonSo&); //Toan tu so sanh lon hon hoac bang
    int operator<=(const CHonSo&); //Toan tu so sanh nho hon hoac bang
    // Phuong thuc kiem tra 
    CHonSo operator+(CHonSo &); // Toan tu cong
    CHonSo operator-(CHonSo &); // Toan tu tru
    CHonSo operator*(CHonSo &); // Toan tu cong
    CHonSo operator/(CHonSo &); // Toan tu chia
    CHonSo operator+=(int); // Toan tu cong don
    CHonSo operator-=(int); // Toan tu tru don
    CHonSo operator*=(int); // Toan tu nhan don
    CHonSo operator/=(int); // Toan tu chia don 
    //Phuong thuc pha huy
    ~CHonSo(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CHonSo::KhoiTao(){
    tu=0;
    mau=0;
    nguyen=0;
}

//Phuong thuc khoi tao khi biet day du thong tinh
void CHonSo::KhoiTao(float ttu, float mmau, float nnguyen){
    tu=ttu;
    mau=mmau;
    nguyen=nnguyen;
}

//Phuong thuc khoi tao sao chep
void CHonSo::KhoiTao(const CHonSo&P){
    tu=P.tu;
    mau=P.mau;
    nguyen=P.nguyen;
}

//Phuong thuc thiet lap mac dinh
CHonSo::CHonSo(){
    tu=0;
    mau=0;
    nguyen=0;
}

//Phuong thuc thiet lap khi biet day du thong tin
CHonSo::CHonSo(float ttu, float mmau, float nnguyen){
    tu=ttu;
    mau=mmau;
    nguyen=nnguyen;
}

//Phuong thuc thiet lap sao chep
CHonSo::CHonSo(const CHonSo&P){
    tu=P.tu;
    mau=P.mau;
    nguyen=P.nguyen;
}

//Phuong thuc nhap
void CHonSo::Nhap(){
    cout<<"Nhap nguyen:";
    cin>>nguyen;
    cout<<"Nhap tu:";
    cin>>tu;
    cout<<"Nhap mau:";
    cin>>mau;
}

//Toan tu nhap
istream& operator>>(istream&is ,CHonSo&P ){
    cout<<"Nhap nguyen:";
    is>>P.nguyen;
    cout<<"Nhap tu:";
    is>>P.tu;
    cout<<"Nhap mau:";
    is>>P.mau;
    return is;
} 

//Phuong thuc xuat
void CHonSo::Xuat(){
    cout<<nguyen<<"("<<tu<<"/"<<mau<<")";
}

//Toan tu xuat
ostream& operator<<(ostream&os, CHonSo&P){
    os<<P.nguyen<<"("<<P.tu<<"/"<<P.mau<<")";
    return os;
}

//Phuong thuc cung cap tu so
float CHonSo::getTu(){
    return tu;
}
//Phuong thuc cung cap mau so
float CHonSo::getMau(){
    return mau;
}

//Phuong thuc cung cap phan nguyen
float CHonSo::getNguyen(){
    return nguyen;
}

//Toan tu gan  
CHonSo& CHonSo::operator=(const CHonSo&P){
    tu=P.tu;
    mau=P.mau;
    nguyen=P.nguyen;
    return *this;
}

//Phuong thuc cap nhat tu so
void CHonSo::setTu(float ttu){
    tu=ttu;
}

//Phuong thuc cap nhat mau so
void CHonSo::setMau(float mmau){
    mau=mmau;
}

//Phuong thuc cap nhat phan nguyen
void CHonSo::setNguyen(float nnguyen){
    nguyen=nnguyen;
}

//Kiem tra hai phan so bang khong 
int CHonSo::isBangKhong(){
    if(tu==0)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so bang nhau
int CHonSo::isBang(const CHonSo&P){
    if(tu==P.tu & mau==P.mau & nguyen==P.nguyen)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so khong bang
int CHonSo::isKhongBang(const CHonSo&P){
    if(tu!=P.tu & mau!=P.mau & nguyen!=P.nguyen)
       return 1;
    else 
       return 0;
}


int CHonSo::operator>(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>0 && (nguyen-x.nguyen)>0  )
       return 1;
    else
       return 0;
}

int CHonSo::operator<(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<0 && (nguyen-x.nguyen)<0)
       return 1;
    else
       return 0;
}

int CHonSo::operator<=(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)<=0 && (nguyen-x.nguyen)<=0)
       return 1;
    else
       return 0;
}

int CHonSo::operator>=(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)>=0 && (nguyen-x.nguyen)>=0)
       return 1;
    else
       return 0;
}

int CHonSo::operator!=(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)!=0 && (nguyen-x.nguyen)!=0)
       return 1;
    else
       return 0;
}

int CHonSo::operator==(const CHonSo &x){
    float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
    if(((float)hieu)==0 && (nguyen-x.nguyen)==0)
       return 1;
    else
       return 0;
}

CHonSo CHonSo::operator+(CHonSo &x){
    CHonSo temp;
    temp.tu=tu*x.mau+x.tu*mau;
    temp.mau=mau*x.mau;
    temp.nguyen=nguyen+x.nguyen;
    return temp;
}

CHonSo CHonSo::operator-(CHonSo &x){
    CHonSo temp;
    temp.tu=tu*x.mau-x.tu*mau;
    temp.mau=mau*x.mau;
    temp.nguyen=nguyen-x.nguyen;
    return temp;
}

CHonSo CHonSo::operator*(CHonSo &x){
    CHonSo temp;
    temp.tu=tu*x.tu;
    temp.mau=mau*x.mau;
    temp.nguyen=nguyen*x.nguyen;
    return temp;
}

CHonSo CHonSo::operator/(CHonSo &x){
    CHonSo temp;
    temp.tu=tu*x.mau;
    temp.mau=mau*x.tu;
    temp.nguyen=nguyen/x.nguyen;
    return temp;
}

CHonSo CHonSo::operator+=(int phanso){
    CHonSo temp;
    temp.tu=tu+mau*(phanso);
    temp.mau=mau;
    return temp;
}

CHonSo CHonSo::operator-=(int phanso){
    CHonSo temp;
    temp.tu=tu-mau*(phanso);
    temp.mau=mau;
    return temp;
}


CHonSo CHonSo::operator*=(int phanso){
    CHonSo temp;
    temp.tu=tu*phanso;
    temp.mau=mau;
    return temp;
}

CHonSo CHonSo::operator/=(int phanso){
    CHonSo temp;
    temp.mau=mau*phanso;
    temp.tu=tu;
    return temp;
}

CHonSo::~CHonSo(){
    return;
}

int main(){
    CHonSo a,b,c,kq;
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
    CHonSo PS1;
    CHonSo PS2(8,-9, 2);
    CHonSo PS3(PS2);
    cout<<PS1<<endl;
    cout<<PS2<<endl;
    cout<<PS3<<endl;
    return 0;
}