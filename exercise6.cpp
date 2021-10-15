#include <iostream>
using namespace std;

class CNgay {
    private:
    int ngay, thang, nam;
    public: 
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
    int operator==(const CNgay&); // Kiem tra hai ngay giong nhau
    int operator!=(const CNgay&); //Kiem tra hai ngay khac nhau
    //Phuong thuc pha huy
    ~CNgay(); //Khoi tao phuong thuc pha huy
};
//Phuong thuc khoi tao mac dinh
void CNgay::KhoiTao(){
    ngay=0;
    thang=0;
    nam=0;
}
//Phuong thuc khoi tao khi biet day du thong tinh
void CNgay::KhoiTao(float nngay, float tthang, float nnam){
    ngay=nngay;
    thang=tthang;
    nam=nnam; 
}
//Phuong thuc khoi tao sao chep
void CNgay::KhoiTao(const CNgay&P){
   ngay=P.ngay;
   thang=P.thang;
   nam=P.nam;
}
//Phuong thuc thiet lap mac dinh
CNgay::CNgay(){
    ngay=0;
    thang=0;
    nam=0;
}
//Phuong thuc thiet lap khi biet day du thong tin
CNgay::CNgay(float nngay, float tthang, float nnam){
    ngay=nngay;
    thang=tthang;
    nam=nnam;
}
//Phuong thuc thiet lap sao chep
CNgay::CNgay(const CNgay&P){
    ngay=P.ngay;
    thang=P.thang;
    nam=P.nam;
}
//Phuong thuc nhap
void CNgay::Nhap(){
    cout<<"Nhap ngay:";
    cin>>ngay;
    cout<<"Nhap thang:";
    cin>>thang;
    cout<<"Nhap nam: ";
    cin>>nam;
}
//Toan tu nhap
istream& operator>>(istream&is ,CNgay&P ){
    cout<<"Nhap ngay:";
    is>>P.ngay;
    cout<<"Nhap thang:";
    is>>P.thang;
    cout<<"Nhap nam: ";
    is>>P.nam; 
    return is;
} 
//Phuong thuc xuat
void CNgay::Xuat(){
    cout<<ngay<<"/"<<thang<<"/"<<nam;
}
//Toan tu xuat
ostream& operator<<(ostream&os, CNgay&P){
    os<<P.ngay<<"/"<<P.thang<<"/"<<P.nam;
    return os;
}
//Phuong thuc cung cap ngay
float CNgay::getNgay(){
    return ngay;
}
//Phuong thuc cung cap thang
float CNgay::getThang(){
    return thang;
}
//Phuong thuc cung cap nam
float CNgay::getNam(){
    return nam;
}
//Toan tu gan  
CNgay& CNgay::operator=(const CNgay&P){
    ngay=P.ngay;
    thang=P.thang;
    nam=P.nam;
    return *this;
}
//Phuong thuc cap nhat ngay
void CNgay::setNgay(float nngay){
    ngay=nngay;
}
//Phuong thuc cap nhat thang
void CNgay::setThang(float tthang){
    thang=tthang;
}
//Phuong thuc cap nhat nam
void CNgay::setNam(float nnam){
    nam=nnam;
}
int CNgay::operator!=(const CNgay &x)
{
	if(ngay!=x.ngay && thang!=x.thang && nam!=x.nam)
		return 1;
	else
		return 0;
}
int CNgay::operator==(const CNgay &x)
{
	if(ngay==x.ngay && thang==x.thang && nam==x.nam)
		return 1;
	else
		return 0;
}
//Khoi tao phuong thuc pha huy
CNgay::~CNgay(){
    return;
}
int main(){
    CNgay a,b;
    a.Nhap();
    b.Nhap();
    if(a==b)
    cout<<"Hai ngay a va b la cung mot ngay";
    if(a!=b)
    cout<<"Hai ngay a va b la khac nhau ";
}

