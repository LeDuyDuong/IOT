#include <iostream>
#include <math.h>
using namespace std;

class CHinhCau {
    private:
    float x,y,r;
    public:
    //Phuong thuc khoi tao
    void KhoiTao(); //Phuong thuc khoi tao mac dinh
    void KhoiTao(float, float, float); //Phuong thuc khoi tao khi biet day du thong tinh
    void KhoiTao(const CHinhCau&); //Phuong thuc khoi tao sao chep
    CHinhCau(); //Phuong thuc thiet lap mac dinh
    CHinhCau(float, float, float); //Phuong thuc thiet lap khi biet day du thong tin
    CHinhCau(const CHinhCau&); //Phuong thuc thiet lap sao chep
    void Nhap(); //Phuong thuc nhap
    friend istream& operator>>(istream& , CHinhCau&); //Toan tu nhap
    //Phuong thuc cung cap thong tin
    void Xuat(); //Phuong thuc xuat
    friend ostream& operator<<(ostream& , CHinhCau&); //Toan tu xuat
    float getX(); //Phuong thuc cung cap hoanh do
    float getY(); //Phuong thuc cung cap tung do
    float getR(); //Phuong thuc cung cap ban kinh
    //Phuong thuc cap nhat thong tin
    CHinhCau& operator=(const CHinhCau&); //Toan tu gan        
    void setX(float); //Phuong thuc cap nhat hoanh do
    void setY(float); //Phuong thuc cap nhat tung do
    void setR(float); //Phuong thuc cap nhat ban kinh
    //Phuong thuc kiem tra tong quat
    int operator==(const CHinhCau&); // Kiem tra hai duong tron giong nhau
    int operator!=(const CHinhCau&); //Kiem tra hai duong tron khac nhau
    //Phuong thuc pha huy
    ~CHinhCau(); //Khoi tao phuong thuc pha huy
};

//Phuong thuc khoi tao mac dinh
void CHinhCau::KhoiTao(){
    x=0;
    y=0;
    r=1;
}
//Phuong thuc khoi tao khi biet day du thong tinh
void CHinhCau::KhoiTao(float xx, float yy, float rr){
    x=xx;
    y=yy;
    r=rr; 
}
//Phuong thuc khoi tao sao chep
void CHinhCau::KhoiTao(const CHinhCau&P){
   x=P.x;
   y=P.y;
   r=P.r;
}
//Phuong thuc thiet lap mac dinh
CHinhCau::CHinhCau(){
    x=0;
    y=0;
    r=1;
}
//Phuong thuc thiet lap khi biet day du thong tin
CHinhCau::CHinhCau(float xx, float yy, float rr){
    x=xx;
    y=yy;
    r=rr;
}
//Phuong thuc thiet lap sao chep
CHinhCau::CHinhCau(const CHinhCau&P){
    x=P.x;
    y=P.y;
    r=P.r;
}
//Phuong thuc nhap
void CHinhCau::Nhap(){
    cout<<"Nhap x cho tam:";
    cin>>x;
    cout<<"Nhap y cho tam:";
    cin>>y;
    cout<<"Nhap ban kinh r: ";
    cin>>r;
}
//Toan tu nhap
istream& operator>>(istream&is ,CHinhCau&P ){
    cout<<"Nhap x cho tam:";
    is>>P.x;
    cout<<"Nhap y cho tam:";
    is>>P.y;
    cout<<"Nhap ban kinh r:";
    is>>P.r; 
    return is;
} 
//Phuong thuc xuat
void CHinhCau::Xuat(){
    cout<<"Hinh cau co tam I("<<x<<","<<y<<") va co ban kinhR="<<r;
}
//Toan tu xuat
ostream& operator<<(ostream&os, CHinhCau&P){
    os<<"Hinh cau co tam I("<<P.x<<","<<P.y<<") va co ban kinhR="<<P.r;
    return os;
}
//Phuong thuc cung cap ngay
float CHinhCau::getX(){
    return x;
}
//Phuong thuc cung cap thang
float CHinhCau::getY(){
    return y;
}
//Phuong thuc cung cap nam
float CHinhCau::getR(){
    return r;
}
//Toan tu gan  
CHinhCau& CHinhCau::operator=(const CHinhCau&P){
    x=P.x;
    y=P.y;
    r=P.r;
    return *this;
}
//Phuong thuc cap nhat ngay
void CHinhCau::setX(float xx){
    x=xx;
}
//Phuong thuc cap nhat thang
void CHinhCau::setY(float yy){
    y=yy;
}
//Phuong thuc cap nhat nam
void CHinhCau::setR(float rr){
    r=rr;
}
int CHinhCau::operator!=(const CHinhCau &a)
{
	if(x!=a.x && y!=a.y && r!=a.r)
		return 1;
	else
		return 0;
}
int CHinhCau::operator==(const CHinhCau &a)
{
	if(x==a.x && y==a.y && r==a.r)
		return 1;
	else
		return 0;
}
//Khoi tao phuong thuc pha huy
CHinhCau::~CHinhCau(){
    return;
}

int main(){
    CHinhCau a,b,c;
    a.Nhap();
    b.Nhap();
    if(a==b)
    cout<<"Hai hinh cau trung nhau";
    if(a!=b)
    cout<<"Hai hinh cau khac nhau";
    c=a;
    c.Xuat();
    cout<<" "<<endl;
    CHinhCau DT1;
    CHinhCau DT2(5,8,22);
    CHinhCau DT3(DT2);
    cout<<DT1<<endl;
    cout<<DT2<<endl;
    cout<<DT3<<endl;
}


