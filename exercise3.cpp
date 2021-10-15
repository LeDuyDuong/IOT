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
    int operator==(CPhanSo&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(CPhanSo&); //Toan tu so sanh khac
    int operator>(CPhanSo&); //Toan tu so sanh lon hon
    int operator<(CPhanSo&); //Toan tu so sanh nho hon
    int operator>=(CPhanSo&); //Toan tu so sanh lon hon hoac bang
    int operator<=(CPhanSo&); //Toan tu so sanh nho hon hoac bang
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
}