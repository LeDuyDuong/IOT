#include <iostream>
#include <math.h>
using namespace std;

class CHonSo{
    private:
    float tu, mau, nguyen;
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
    //Phuong thuc cap nhat thong tin
    CHonSo& operator=(const CHonSo&); //Toan tu gan        
    void setTu(float); //Phuong thuc cap nhat tu so
    void setMau(float); //Phuong thuc cap nhat mau so
    //Phuong thuc kiem tra tong quat
    int isBangKhong(); //Kiem tra hai phan so bang 0
    int isBang( const CHonSo&); // Kiem tra hai phan so bang nhau
    int isKhongBang( const CHonSo&); //Kiem tra hai phan so khac nhau
    //Phuong thuc kiem tra so sanh
    int operator==(CHonSo&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(CHonSo&); //Toan tu so sanh khac
    int operator>(CHonSo&); //Toan tu so sanh lon hon
    int operator<(CHonSo&); //Toan tu so sanh nho hon
    int operator>=(CHonSo&); //Toan tu so sanh lon hon hoac bang
    int operator<=(CHonSo&); //Toan tu so sanh nho hon hoac bang
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