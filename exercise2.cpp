#include <iostream>
#include <math.h>
using namespace std;

class CDiemKhongGian {
    private:
    int x,y,z;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CDiemKhongGian&); //Phuong thuc khoi tao sao chep
    CDiemKhongGian(); //Phuong thuc thiet lap mac dinh
    CDiemKhongGian(float, float); //Phuong thuc thiet lap khi biet day du thong tin
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

