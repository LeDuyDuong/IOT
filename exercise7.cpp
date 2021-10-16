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
    int operator==(const CThoiGian&); // Kiem tra hai gio giong nhau
    int operator!=(const CThoiGian&); //Kiem tra hai gio khac nhau
    //Phuong thuc pha huy
    ~CThoiGian(); //Khoi tao phuong thuc pha huy
};
//Phuong thuc khoi tao mac dinh
void CThoiGian::KhoiTao(){
    gio=0;
    phut=0;
    giay=0;
}
//Phuong thuc khoi tao khi biet day du thong tinh
void CThoiGian::KhoiTao(float ggio, float pphut, float ggiay){
    gio=ggio;
    phut=pphut;
    giay=ggiay;
}
//Phuong thuc khoi tao sao chep
void CThoiGian::KhoiTao(const CThoiGian&P){
   gio=P.gio;
   phut=P.phut;
   giay=P.giay;
}
//Phuong thuc thiet lap mac dinh
CThoiGian::CThoiGian(){
    gio=0;
    phut=0;
    giay=0;
}
//Phuong thuc thiet lap khi biet day du thong tin
CThoiGian::CThoiGian(float ggio, float pphut, float ggiay){
    gio=ggio;
    phut=pphut;
    giay=ggiay;
}
//Phuong thuc thiet lap sao chep
CThoiGian::CThoiGian(const CThoiGian&P){
   gio=P.gio;
   phut=P.phut;
   giay=P.giay;
}
//Phuong thuc nhap
void CThoiGian::Nhap(){
    cout<<"Nhap gio:";
    cin>>gio;
    cout<<"Nhap phut:";
    cin>>phut;
    cout<<"Nhap giay: ";
    cin>>giay;
}
//Toan tu nhap
istream& operator>>(istream&is ,CThoiGian&P ){
    cout<<"Nhap gio:";
    is>>P.gio;
    cout<<"Nhap phut:";
    is>>P.phut;
    cout<<"Nhap giay: ";
    is>>P.giay; 
    return is;
} 
//Phuong thuc xuat
void CThoiGian::Xuat(){
    cout<<gio<<":"<<phut<<":"<<giay;
}
//Toan tu xuat
ostream& operator<<(ostream&os, CThoiGian&P){
    os<<P.gio<<":"<<P.phut<<":"<<P.giay;
    return os;
}
//Phuong thuc cung cap ngay
float CThoiGian::getGio(){
    return gio;
}
//Phuong thuc cung cap thang
float CThoiGian::getPhut(){
    return phut;
}
//Phuong thuc cung cap nam
float CThoiGian::getGiay(){
    return giay;
}
//Toan tu gan  
CThoiGian& CThoiGian::operator=(const CThoiGian&P){
    gio=P.gio;
    phut=P.phut;
    giay=P.giay;
    return *this;
}
//Phuong thuc cap nhat ngay
void CThoiGian::setGio(float ggio){
    gio=ggio;
}
//Phuong thuc cap nhat thang
void CThoiGian::setPhut(float pphut){
    phut=pphut;
}
//Phuong thuc cap nhat nam
void CThoiGian::setGiay(float ggiay){
    giay=ggiay;
}
int CThoiGian::operator!=(const CThoiGian &x)
{
	if(gio!=x.gio && phut!=x.phut && giay!=x.giay)
		return 1;
	else
		return 0;
}
int CThoiGian::operator==(const CThoiGian &x)
{
	if(gio==x.gio && phut==x.phut && giay==x.giay)
		return 1;
	else
		return 0;
}
//Khoi tao phuong thuc pha huy
CThoiGian::~CThoiGian(){
    return;
}
int main(){
    CThoiGian a,b,c;
    a.Nhap();
    b.Nhap();
    if(a==b)
    cout<<"a va b la cung mot gio"<<endl;
    if(a!=b)
    cout<<"a va b la hai gio khac nhau "<<endl;
    c=a;
    c.Xuat();
    cout<<" "<<endl;
    CThoiGian TG1;
    CThoiGian TG2(2, 3, 5);
    CThoiGian TG3(TG2);
    cout<<TG1<<endl;
    cout<<TG2<<endl;
    cout<<TG3<<endl;
}
