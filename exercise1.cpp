#include <iostream>
#include <math.h>
using namespace std;

class CDiem {
    private:
    float x, y;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CDiem&); //Phuong thuc khoi tao sao chep
    CDiem(); //Phuong thuc thiet lap mac dinh
    CDiem(float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CDiem(const CDiem&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuong thuc nhap
    friend istream& operator>>(istream& , CDiem&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CDiem&); //Toan tu xuat
    float getX(); //Phuong thuc cung cap hoanh do
    float getY(); //Phuong thuc cung cap tung do
    //Phuong thuc cap nhat thong tin
    CDiem& operator=(const CDiem&); //Toan tu gan        
    void setX(float); //Phuong thuc cap nhat hoanh do
    void setY(float); //Phuong thuc cap nhat tung do
    //Phuong thuc kiem tra tong quat
    int isTrungGoc(); //Kiem tra diem co trung goc toa do
    int isTrung( const CDiem&); // Kiem tra 2 diem co trung nhau 
    int isKhongTrung( const CDiem&); //Kiem tra 2 diem khong trung nhau
    int ktThuocHoanh(); //Kiem tra diem co thuoc truc hoanh 
    int ktThuocTung(); //Kiem tra diem co thuoc truc tung 
    //Phuong thuc kiem tra trong mat phang
    int ktThuoc1(); //Kiem tra diem co thuoc goc phan tu thu nhat
    int ktThuoc2(); //Kiem tra diem co thuoc goc phan tu thu hai
    int ktThuoc3(); //Kiem tra diem co thuoc goc phan tu thu ba
    int ktThuoc4(); //Kiem tra diem co thuoc goc phan tu thu tu
    //Phuong thuc kiem tra so sanh
    int operator==(CDiem&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(CDiem&); //Toan tu so sanh khac
    int operator>(CDiem&); //Toan tu so sanh lon hon
    int operator<(CDiem&); //Toan tu so sanh nho hon
    int operator>=(CDiem&); //Toan tu so sanh lon hon hoac bang
    int operator<=(CDiem&); //Toan tu so sanh nho hon hoac bang
    //Phuong thuc xu ly tong quat
    float KhoangCachGoc(); //Khoang cach diem den goc toa do
    float KhoangCach(const CDiem&); // Khoang cach giua 2 diem
    float KhoangCachX(const CDiem&); // KHoang cach giua 2 diem theo phuong Ox
    float KhoangCachY(const CDiem&); // KHoang cach giua 2 diem theo phuong Oy
    //Phuong thuc xu ly tim toa do
    CDiem DoiXungGoc(); // Tim diem doi xung qua goc toa do
    CDiem DoiXungHoanh(); //Tim diem doi xung qua truc hoanh
    CDiem DoiXungTung(); //Tim diem doi xung qua truc tung
    CDiem DoiXungPhanGiac1(); //Tim diem doi xung qua duong phan giac thu nhat y=x
    CDiem DoiXungPhanGiac2(); //Tim diem doi xung qua duong phan giac thu hai y=-x
    //Phuong thuc pha huy
    ~CDiem(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CDiem::KhoiTao(){
    x=0;
    y=0;
}

//Phuong thuc khoi tao khi biet day du thong tinh
void CDiem::KhoiTao(float xx, float yy){
    x=xx;
    y=yy;
}

//Phuong thuc khoi tao sao chep
void CDiem::KhoiTao(const CDiem&P){
    x=P.x;
    y=P.y;
}

//Phuong thuc thiet lap mac dinh
CDiem::CDiem(){
    x=0;
    y=0;
}

//Phuong thuc thiet lap khi biet day du thong tin
CDiem::CDiem(float xx, float yy){
    x=xx;
    y=yy;
}

//Phuong thuc thiet lap sao chep
CDiem::CDiem(const CDiem&P){
    x=P.x;
    y=P.y;
}

//Phuong thuc nhap
void CDiem::Nhap(){
    cout<<"Nhap x:";
    cin>>x;
    cout<<"Nhap y:";
    cin>>y;
}

//Toan tu nhap
istream& operator>>(istream&is ,CDiem&P ){
    cout<<"Nhap x:";
    is>>P.x;
    cout<<"Nhap y:";
    is>>P.y;
    return is;
} 

//Phuong thuc xuat
void CDiem::Xuat(){
    cout<<"("<<x<<","<<y<<")";
}

//Toan tu xuat
ostream& operator<<(ostream&os, CDiem&P){
    os<<"("<<P.x<<","<<P.y<<")";
    return os;
}

//Phuong thuc cung cap hoanh do
float CDiem::getX(){
    return x;
}
//Phuong thuc cung cap tung do
float CDiem::getY(){
    return y;
}

//Toan tu gan  
CDiem& CDiem::operator=(const CDiem&P){
    x=P.x;
    y=P.y;
    return *this;
}

//Phuong thuc cap nhat hoanh do
void CDiem::setX(float xx){
    x=xx;
}

//Phuong thuc cap nhat tung do
void CDiem::setY(float yy){
    y=yy;
}

//Kiem tra diem co trung goc toa do
int CDiem::isTrungGoc(){
    if(x==0 & y==0)
       return 1;
    else 
       return 0;
}

// Kiem tra 2 diem co trung nhau
int CDiem::isTrung(const CDiem&P){
    if(x==P.x & y==P.y)
       return 1;
    else 
       return 0;
}

// Kiem tra 2 diem khong trung nhau
int CDiem::isKhongTrung(const CDiem&P){
    if(x!=P.x & y!=P.y)
       return 1;
    else 
       return 0;
}

// Kiem tra diem co thuoc truc hoanh 
int CDiem::ktThuocHoanh(){
    if(y==0)
       return 1;
    else 
       return 0;
}

// Kiem tra diem co thuoc tung hoanh 
int CDiem::ktThuocTung(){
    if(x==0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu nhat
int CDiem::ktThuoc1(){
    if(x>0 && y>0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu hai
int CDiem::ktThuoc2(){
    if(x<0 && y>0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu ba
int CDiem::ktThuoc3(){
    if(x<0 && y<0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu tu
int CDiem::ktThuoc4(){
    if(x>0 && y<0)
       return 1;
    else 
       return 0;
}

//Toan tu so sanh bang
int CDiem::operator==( CDiem&P){
    if(KhoangCachGoc()==P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh khac
int CDiem::operator!=( CDiem&P){
    if(KhoangCachGoc()!=P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh lon hon
int CDiem::operator>( CDiem&P){
    if(KhoangCachGoc()>P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh nho hon
int CDiem::operator<( CDiem&P){
    if(KhoangCachGoc()<P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh lon hon hoac bang
int CDiem::operator>=( CDiem&P){
    if(KhoangCachGoc()>=P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh nho hon hoac bang
int CDiem::operator<=( CDiem&P){
    if(KhoangCachGoc()<=P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Khoang cach diem den goc toa do
float CDiem::KhoangCachGoc(){
    return sqrt(x*x + y*y);
}

// Khoang cach giua 2 diem
float CDiem::KhoangCach(const CDiem&P){
    return sqrt((x-P.x)*(x-P.x) + (y-P.y)*(y-P.y));
}

// KHoang cach giua 2 diem theo phuong Ox
float CDiem::KhoangCachX(const CDiem&P){
    return abs(x-P.x);
}

// KHoang cach giua 2 diem theo phuong Oy
float CDiem::KhoangCachY(const CDiem&P){
    return abs(y-P.y);
}

// Tim diem doi xung qua goc toa do
CDiem CDiem::DoiXungGoc(){
    CDiem temp;
    temp.x=-x;
    temp.y=-y;
    return temp;
}

//Tim diem doi xung qua truc hoanh
CDiem CDiem::DoiXungHoanh(){
    CDiem temp;
    temp.x=x;
    temp.y=-y;
    return temp;
}

//Tim diem doi xung qua truc tung
CDiem CDiem::DoiXungTung(){
    CDiem temp;
    temp.x=-x;
    temp.y=y;
    return temp;
}

//Tim diem doi xung qua duong phan giac thu nhat y=x
CDiem CDiem::DoiXungPhanGiac1(){
    CDiem temp;
    temp.x=y;
    temp.y=x;
    return temp;
}

//Tim diem doi xung qua duong phan giac thu nhat y=-x
CDiem CDiem::DoiXungPhanGiac2(){
    CDiem temp;
    temp.x=-y;
    temp.y=-x;
    return temp;
}

//Khoi tao phuong thuc pha huy
CDiem::~CDiem(){
    return;
}


int main(){
    
}
fjwdfnoweowdfcnjoiufcx







