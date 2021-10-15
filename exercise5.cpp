#include <iostream>
#include <math.h>
using namespace std;

class CSoPhuc {
    private:
    int thuc, ao;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CSoPhuc&); //Phuong thuc khoi tao sao chep
    CSoPhuc(); //Phuong thuc thiet lap mac dinh
    CSoPhuc(float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CSoPhuc(const CSoPhuc&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuong thuc nhap
    friend istream& operator>>(istream& , CSoPhuc&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CSoPhuc&); //Toan tu xuat
    float getThuc(); //Phuong thuc cung cap so thuc
    float getAo(); //Phuong thuc cung cap so ao
    //Phuong thuc cap nhat thong tin
    CSoPhuc& operator=(const CSoPhuc&); //Toan tu gan        
    void setThuc(float); //Phuong thuc cap nhat so thuc
    void setAo(float); //Phuong thuc cap nhat so ao
    //Phuong thuc kiem tra tong quat
    int isBangKhong(); //Kiem tra hai so phuc bang 0
    int isBang( const CSoPhuc&); // Kiem tra hai so phuc bang nhau
    int isKhongBang( const CSoPhuc&); //Kiem tra hai so phuc khac nhau
    //Phuong thuc kiem tra so sanh
    int operator==(CSoPhuc&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(CSoPhuc&); //Toan tu so sanh khac
    int operator>(CSoPhuc&); //Toan tu so sanh lon hon
    int operator<(CSoPhuc&); //Toan tu so sanh nho hon
    int operator>=(CSoPhuc&); //Toan tu so sanh lon hon hoac bang
    int operator<=(CSoPhuc&); //Toan tu so sanh nho hon hoac bang
    // Phuong thuc kiem tra 
    CSoPhuc operator+(CSoPhuc &); // Toan tu cong
    CSoPhuc operator-(CSoPhuc &); // Toan tu tru
    CSoPhuc operator*(CSoPhuc &); // Toan tu cong
    CSoPhuc operator/(CSoPhuc &); // Toan tu chia
    CSoPhuc operator+=(int); // Toan tu cong don
    CSoPhuc operator-=(int); // Toan tu tru don
    CSoPhuc operator*=(int); // Toan tu nhan don
    CSoPhuc operator/=(int); // Toan tu chia don 
    //Phuong thuc pha huy
    ~CSoPhuc(); //Khoi tao phuong thuc pha huy
};