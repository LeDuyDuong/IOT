#include <iostream>
#include <math.h>
using namespace std;

class CNgay {
    private:
    int ngay, thang, nam;
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CNgay&); //Phuong thuc khoi tao sao chep
    CNgay(); //Phunong thuc thiet lap mac dinh
    CNgay(float, float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CNgay(const CNgay&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuog thuc nhap
    friend istream& operator>>(istream& , CNgay&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CNgay&); //Toan tu xuat
    float getNgay(); //Phuong thuc cung cap ngay
    float getThang(); //Phuong thuc cung cap thang
    float getNam(); //Phuong thuc cung cap nam
    //Phuong thuc cap nhat thong tin
    CNgay& operator=(const CNgay&); //Toan tu gan        
    void setNgay(float); //Phuong thuc cap nhat ngay
    void setThang(float); //Phuong thuc cap nhat thang
    void setNam(float); //Phuong thuc cap nhat nam
    //Phuong thuc kiem tra tong quat
    int isBang( const CNgay&); // Kiem tra hai ngay giong nhau
    int isKhongBang( const CNgay&); //Kiem tra hai ngay khac nhau
    //Phuong thuc pha huy
    ~CNgay(); //Khoi tao phuong thuc pha huy
};