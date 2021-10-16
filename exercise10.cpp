#include <iostream>
#include <math.h>
using namespace std;

class CDuongTron {
    private:
    float x,y,r;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CDuongTron&); //Phuong thuc khoi tao sao chep
    CDuongTron(); //Phuong thuc thiet lap mac dinh
    CDuongTron(float, float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CDuongTron(const CDuongTron&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuong thuc nhap
    friend istream& operator>>(istream& , CDuongTron&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CDuongTron&); //Toan tu xuat
    float getX(); //Phuong thuc cung cap hoanh do
    float getY(); //Phuong thuc cung cap tung do
    float getR(); //Phuong thuc cung cap ban kinh
    //Phuong thuc cap nhat thong tin
    CDuongTron& operator=(const CDuongTron&); //Toan tu gan        
    void setX(float); //Phuong thuc cap nhat hoanh do
    void setY(float); //Phuong thuc cap nhat tung do
    void setR(float); //Phuong thuc cap nhat ban kinh
    //Phuong thuc kiem tra tong quat
    int operator==(const CDuongTron&); // Kiem tra hai duong tron giong nhau
    int operator!=(const CDuongTron&); //Kiem tra hai duong tron khac nhau
    //Phuong thuc pha huy
    ~CDuongTron(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CDuongTron::KhoiTao(){
    x=0;
    y=0;
    r=1;
}
//Phuong thuc khoi tao khi biet day du thong tinh
void CDuongTron::KhoiTao(float xx, float yy, float rr){
    x=xx;
    y=yy;
    r=rr; 
}
//Phuong thuc khoi tao sao chep
void CDuongTron::KhoiTao(const CDuongTron&P){
   x=P.x;
   y=P.y;
   r=P.r;
}
//Phuong thuc thiet lap mac dinh
CDuongTron::CDuongTron(){
    x=0;
    y=0;
    r=1;
}
//Phuong thuc thiet lap khi biet day du thong tin
CDuongTron::CDuongTron(float xx, float yy, float rr){
    x=xx;
    y=yy;
    r=rr;
}
//Phuong thuc thiet lap sao chep
CDuongTron::CDuongTron(const CDuongTron&P){
    x=P.x;
    y=P.y;
    r=P.r;
}
//Phuong thuc nhap
void CDuongTron::Nhap(){
    cout<<"Nhap x cho tam:";
    cin>>x;
    cout<<"Nhap y cho tam:";
    cin>>y;
    cout<<"Nhap ban kinh r: ";
    cin>>r;
}
//Toan tu nhap
istream& operator>>(istream&is ,CDuongTron&P ){
    cout<<"Nhap x cho tam:";
    is>>P.x;
    cout<<"Nhap y cho tam:";
    is>>P.y;
    cout<<"Nhap ban kinh r:";
    is>>P.r; 
    return is;
} 
//Phuong thuc xuat
void CDuongTron::Xuat(){
    cout<<"Duong tron co tam I("<<x<<","<<y<<") va co ban kinhR="<<r;
}
//Toan tu xuat
ostream& operator<<(ostream&os, CDuongTron&P){
    os<<"Duong tron co tam I("<<P.x<<","<<P.y<<") va co ban kinhR="<<P.r;
    return os;
}
//Phuong thuc cung cap ngay
float CDuongTron::getX(){
    return x;
}
//Phuong thuc cung cap thang
float CDuongTron::getY(){
    return y;
}
//Phuong thuc cung cap nam
float CDuongTron::getR(){
    return r;
}
//Toan tu gan  
CDuongTron& CDuongTron::operator=(const CDuongTron&P){
    x=P.x;
    y=P.y;
    r=P.r;
    return *this;
}
//Phuong thuc cap nhat ngay
void CDuongTron::setX(float xx){
    x=xx;
}
//Phuong thuc cap nhat thang
void CDuongTron::setY(float yy){
    y=yy;
}
//Phuong thuc cap nhat nam
void CDuongTron::setR(float rr){
    r=rr;
}
int CDuongTron::operator!=(const CDuongTron &a)
{
	if(x!=a.x && y!=a.y && r!=a.r)
		return 1;
	else
		return 0;
}
int CDuongTron::operator==(const CDuongTron &a)
{
	if(x==a.x && y==a.y && r==a.r)
		return 1;
	else
		return 0;
}
//Khoi tao phuong thuc pha huy
CDuongTron::~CDuongTron(){
    return;
}

int main(){
    CDuongTron a,b,c;
    a.Nhap();
    b.Nhap();
    if(a==b)
    cout<<"Hai duong tron trung nhau";
    if(a!=b)
    cout<<"Hai duong tron khac nhau";
    c=a;
    c.Xuat();
    cout<<" "<<endl;
    CDuongTron DT1;
    CDuongTron DT2(5,8,22);
    CDuongTron DT3(DT2);
    cout<<DT1<<endl;
    cout<<DT2<<endl;
    cout<<DT3<<endl;
}


