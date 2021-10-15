#include <iostream>
#include <math.h>
using namespace std;

class CDiemKhongGian {
    private:
    int x,y,z;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CDiemKhongGian&); //Phuong thuc khoi tao sao chep
    CDiemKhongGian(); //Phuong thuc thiet lap mac dinh
    CDiemKhongGian(float, float, float ); //Phuong thuc thiet lap khi biet day du thong tin
    CDiemKhongGian(const CDiemKhongGian&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuong thuc nhap
    friend istream& operator>>(istream& , CDiemKhongGian&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CDiemKhongGian&); //Toan tu xuat
    float getX(); //Phuong thuc cung cap hoanh do
    float getY(); //Phuong thuc cung cap tung do
    float getZ(); //Phuong thuc cung cap cao do
    //Phuong thuc cap nhat thong tin
    CDiemKhongGian& operator=(const CDiemKhongGian&); //Toan tu gan        
    void setX(float); //Phuong thuc cap nhat hoanh do
    void setY(float); //Phuong thuc cap nhat tung do
    void setZ(float); //Phuong thuc cap nhat cao do
    //Phuong thuc kiem tra tong quat
    int isTrungGoc(); //Kiem tra diem co trung goc toa do
    int isTrung( const CDiemKhongGian&); // Kiem tra 2 diem co trung nhau 
    int isKhongTrung( const CDiemKhongGian&); //Kiem tra 2 diem khong trung nhau
    int ktThuocHoanh(); //Kiem tra diem co thuoc truc hoanh 
    int ktThuocTung(); //Kiem tra diem co thuoc truc tung
    int ktThuocCao(); //Kiem tra diem co thuoc truc cao
    //Phuong thuc kiem tra trong mat phang
    int ktThuoc1(); //Kiem tra diem co thuoc goc phan tam thu nhat
    int ktThuoc2(); //Kiem tra diem co thuoc goc phan tam thu hai
    int ktThuoc3(); //Kiem tra diem co thuoc goc phan tam thu ba
    int ktThuoc4(); //Kiem tra diem co thuoc goc phan tam thu tu
    int ktThuoc5(); //Kiem tra diem co thuoc goc phan tam thu nam
    int ktThuoc6(); //Kiem tra diem co thuoc goc phan tam thu sau
    int ktThuoc7(); //Kiem tra diem co thuoc goc phan tam thu bay
    int ktThuoc8(); //Kiem tra diem co thuoc goc phan tam thu tam
    //Phuong thuc kiem tra so sanh
    int operator==(CDiemKhongGian&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(CDiemKhongGian&); //Toan tu so sanh khac
    int operator>(CDiemKhongGian&); //Toan tu so sanh lon hon
    int operator<(CDiemKhongGian&); //Toan tu so sanh nho hon
    int operator>=(CDiemKhongGian&); //Toan tu so sanh lon hon hoac bang
    int operator<=(CDiemKhongGian&); //Toan tu so sanh nho hon hoac bang
    //Phuong thuc xu ly tong quat
    float KhoangCachGoc(); //Khoang cach diem den goc toa do
    float KhoangCach(const CDiemKhongGian&); // Khoang cach giua 2 diem
    float KhoangCachX(const CDiemKhongGian&); // KHoang cach giua 2 diem theo phuong Ox
    float KhoangCachY(const CDiemKhongGian&); // KHoang cach giua 2 diem theo phuong Oy
    float KhoangCachZ(const CDiemKhongGian&); // KHoang cach giua 2 diem theo phuong Oz
    //Phuong thuc xu ly tim toa do
    CDiemKhongGian DoiXungGoc(); // Tim diem doi xung qua goc toa do
    CDiemKhongGian DoiXungHoanh(); //Tim diem doi xung qua truc hoanh
    CDiemKhongGian DoiXungTung(); //Tim diem doi xung qua truc tung
    CDiemKhongGian DoiXungCao(); //Tim diem doi xung qua truc cao
    //Phuong thuc pha huy
    ~CDiemKhongGian(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CDiemKhongGian::KhoiTao(){
    x=0;
    y=0;
    z=0;
}

//Phuong thuc khoi tao khi biet day du thong tinh
void CDiemKhongGian::KhoiTao(float xx, float yy, float zz){
    x=xx;
    y=yy;
}

//Phuong thuc khoi tao sao chep
void CDiemKhongGian::KhoiTao(const CDiemKhongGian&P){
    x=P.x;
    y=P.y;
    z=P.z;
}

//Phuong thuc thiet lap mac dinh
CDiemKhongGian::CDiemKhongGian(){
    x=0;
    y=0;
    z=0;
}

//Phuong thuc thiet lap khi biet day du thong tin
CDiemKhongGian::CDiemKhongGian(float xx, float yy, float zz){
    x=xx;
    y=yy;
    z=zz;
}

//Phuong thuc thiet lap sao chep
CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian&P){
    x=P.x;
    y=P.y;
    z=P.z;
}

//Phuong thuc nhap
void CDiemKhongGian::Nhap(){
    cout<<"Nhap x:";
    cin>>x;
    cout<<"Nhap y:";
    cin>>y;
    cout<<"Nhap z:";
    cin>>z;
}

//Toan tu nhap
istream& operator>>(istream&is ,CDiemKhongGian&P ){
    cout<<"Nhap x:";
    is>>P.x;
    cout<<"Nhap y:";
    is>>P.y;
    cout<<"Nhap z:";
    is>>P.z;
    return is;
} 

//Phuong thuc xuat
void CDiemKhongGian::Xuat(){
    cout<<"("<<x<<","<<y<<","<<z<<")";
}

//Toan tu xuat
ostream& operator<<(ostream&os, CDiemKhongGian&P){
    os<<"("<<P.x<<","<<P.y<<","<<P.z<<")";
    return os;
}

//Phuong thuc cung cap hoanh do
float CDiemKhongGian::getX(){
    return x;
}
//Phuong thuc cung cap tung do
float CDiemKhongGian::getY(){
    return y;
}

float CDiemKhongGian::getZ(){
    return z;
}

//Toan tu gan  
CDiemKhongGian& CDiemKhongGian::operator=(const CDiemKhongGian&P){
    x=P.x;
    y=P.y;
    return *this;
}

//Phuong thuc cap nhat hoanh do
void CDiemKhongGian::setX(float xx){
    x=xx;
}

//Phuong thuc cap nhat tung do
void CDiemKhongGian::setY(float yy){
    y=yy;
}

//Kiem tra diem co trung goc toa do
int CDiemKhongGian::isTrungGoc(){
    if(x==0 & y==0 & z==0)
       return 1;
    else 
       return 0;
}

// Kiem tra 2 diem co trung nhau
int CDiemKhongGian::isTrung(const CDiemKhongGian&P){
    if(x==P.x & y==P.y & z==P.z)
       return 1;
    else 
       return 0;
}

// Kiem tra 2 diem khong trung nhau
int CDiemKhongGian::isKhongTrung(const CDiemKhongGian&P){
    if(x!=P.x & y!=P.y & z!=P.z)
       return 1;
    else 
       return 0;
}

// Kiem tra diem co thuoc truc hoanh 
int CDiemKhongGian::ktThuocHoanh(){
    if(x==0)
       return 1;
    else 
       return 0;
}

// Kiem tra diem co thuoc tung hoanh 
int CDiemKhongGian::ktThuocTung(){
    if(y==0)
       return 1;
    else 
       return 0;
}

// Kiem tra diem co thuoc tung hoanh 
int CDiemKhongGian::ktThuocCao(){
    if(z==0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu nhat
int CDiemKhongGian::ktThuoc1(){
    if(x>0 && y>0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu hai
int CDiemKhongGian::ktThuoc2(){
    if(x<0 && y>0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu ba
int CDiemKhongGian::ktThuoc3(){
    if(x<0 && y<0)
       return 1;
    else 
       return 0;
}

//Kiem tra diem co thuoc goc phan tu thu tu
int CDiemKhongGian::ktThuoc4(){
    if(x>0 && y<0)
       return 1;
    else 
       return 0;
}

int CDiemKhongGian::ktThuoc5(){
    if(z>0 && y>0)
       return 1;
    else 
       return 0;
}

int CDiemKhongGian::ktThuoc6(){
    if(z>0 && y<0)
       return 1;
    else 
       return 0;
}

int CDiemKhongGian::ktThuoc7(){
    if(z<0 && y>0)
       return 1;
    else 
       return 0;
}

int CDiemKhongGian::ktThuoc8(){
    if( z<0 && y<0)
       return 1;
    else 
       return 0;
}

//Toan tu so sanh bang
int CDiemKhongGian::operator==( CDiemKhongGian&P){
    if(KhoangCachGoc()==P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh khac
int CDiemKhongGian::operator!=( CDiemKhongGian&P){
    if(KhoangCachGoc()!=P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh lon hon
int CDiemKhongGian::operator>( CDiemKhongGian&P){
    if(KhoangCachGoc()>P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh nho hon
int CDiemKhongGian::operator<( CDiemKhongGian&P){
    if(KhoangCachGoc()<P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh lon hon hoac bang
int CDiemKhongGian::operator>=( CDiemKhongGian&P){
    if(KhoangCachGoc()>=P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Toan tu so sanh nho hon hoac bang
int CDiemKhongGian::operator<=( CDiemKhongGian&P){
    if(KhoangCachGoc()<=P.KhoangCachGoc())
       return 1;
    else 
       return 0;
}

//Khoang cach diem den goc toa do
float CDiemKhongGian::KhoangCachGoc(){
    return sqrt(x*x + y*y + z*z);
}

// Khoang cach giua 2 diem
float CDiemKhongGian::KhoangCach(const CDiemKhongGian&P){
    return sqrt((x-P.x)*(x-P.x) + (y-P.y)*(y-P.y) +(z-P.z)*(z-P.z));
}

// KHoang cach giua 2 diem theo phuong Ox
float CDiemKhongGian::KhoangCachX(const CDiemKhongGian&P){
    return abs(x-P.x);
}

// KHoang cach giua 2 diem theo phuong Oy
float CDiemKhongGian::KhoangCachY(const CDiemKhongGian&P){
    return abs(y-P.y);
}

// KHoang cach giua 2 diem theo phuong Oy
float CDiemKhongGian::KhoangCachZ(const CDiemKhongGian&P){
    return abs(z-P.z);
}

// Tim diem doi xung qua goc toa do
CDiemKhongGian CDiemKhongGian::DoiXungGoc(){
    CDiemKhongGian temp;
    temp.x=-x;
    temp.y=-y;
    temp.z=-z;
    return temp;
}

//Tim diem doi xung qua truc hoanh
CDiemKhongGian CDiemKhongGian::DoiXungHoanh(){
    CDiemKhongGian temp;
    temp.x=x;
    temp.y=-y;
    temp.z=z;
    return temp;
}

//Tim diem doi xung qua truc tung
CDiemKhongGian CDiemKhongGian::DoiXungTung(){
    CDiemKhongGian temp;
    temp.x=-x;
    temp.y=y;
    temp.z=z;
    return temp;
}

//Tim diem doi xung qua truc tung
CDiemKhongGian CDiemKhongGian::DoiXungCao(){
    CDiemKhongGian temp;
    temp.x=x;
    temp.y=y;
    temp.z=-z;
    return temp;
}

//Khoi tao phuong thuc pha huy
CDiemKhongGian::~CDiemKhongGian(){
    return;
}

int main(){
    CDiemKhongGian a,b;
    a.Nhap();
    b.Nhap();
    if(a==b)
    cout<<"Diem a va b giong nhau";
    if(a!=b)
    cout<<"Diem a va b khong giong nhau";
}


