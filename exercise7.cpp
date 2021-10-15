#include <iostream>
#include <math.h>
using namespace std;

class CThoiGian {
    private:
    int gio, phut, giay;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CThoiGian&); //Phuong thuc khoi tao sao chep
    CThoiGian(); //Phunong thuc thiet lap mac dinh
    CThoiGian(float, float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CThoiGian(const CThoiGian&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuog thuc nhap
    friend istream& operator>>(istream& , CThoiGian&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CThoiGian&); //Toan tu xuat
    float getGio(); //Phuong thuc cung cap gio
    float getPhut(); //Phuong thuc cung cap phut
    float getGiay(); //Phuong thuc cung cap giay
    //Phuong thuc cap nhat thong tin
    CThoiGian& operator=(const CThoiGian&); //Toan tu gan        
    void setGio(float); //Phuong thuc cap nhat gio
    void setPhut(float); //Phuong thuc cap nhat phut
    void setGiay(float); //Phuong thuc cap nhat giay
    //Phuong thuc kiem tra tong quat
    int isBang( const CThoiGian&); // Kiem tra hai gio giong nhau
    int isKhongBang( const CThoiGian&); //Kiem tra hai gio khac nhau
    //Phuong thuc pha huy
    ~CThoiGian(); //Khoi tao phuong thuc pha huy
};