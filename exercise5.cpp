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
    int operator==(const CSoPhuc&); //Toan tu so sanh bang   //(const CDiem&) khong duoc, phai dung (CDiem&)
    int operator!=(const CSoPhuc&); //Toan tu so sanh khac
    int operator>(const CSoPhuc&); //Toan tu so sanh lon hon
    int operator<(const CSoPhuc&); //Toan tu so sanh nho hon
    int operator>=(const CSoPhuc&); //Toan tu so sanh lon hon hoac bang
    int operator<=(const CSoPhuc&); //Toan tu so sanh nho hon hoac bang
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

//Phuong thuc khoi tao mac dinh
void CSoPhuc::KhoiTao(){
    thuc=0;
    ao=0;
}

//Phuong thuc khoi tao khi biet day du thong tinh
void CSoPhuc::KhoiTao(float tthuc, float aao){
    thuc=tthuc;
    ao=aao;
}

//Phuong thuc khoi tao sao chep
void CSoPhuc::KhoiTao(const CSoPhuc&P){
    thuc=P.thuc;
    ao=P.ao;
}

//Phuong thuc thiet lap mac dinh
CSoPhuc::CSoPhuc(){
    thuc=0;
    ao=0;
}

//Phuong thuc thiet lap khi biet day du thong tin
CSoPhuc::CSoPhuc(float tthuc, float aao){
    thuc=tthuc;
    ao=aao;
}

//Phuong thuc thiet lap sao chep
CSoPhuc::CSoPhuc(const CSoPhuc&P){
    thuc=P.thuc;
    ao=P.ao;
}

//Phuong thuc nhap
void CSoPhuc::Nhap(){
    cout<<"Nhap thuc:";
    cin>>thuc;
    cout<<"Nhap ao:";
    cin>>ao;
}

//Toan tu nhap
istream& operator>>(istream&is ,CSoPhuc&P ){
    cout<<"Nhap thuc:";
    is>>P.thuc;
    cout<<"Nhap ao:";
    is>>P.ao;
    return is;
} 

//Phuong thuc xuat
void CSoPhuc::Xuat(){
    cout<<thuc<<"+("<<ao<<")i";
}

//Toan tu xuat
ostream& operator<<(ostream&os, CSoPhuc&P){
    os<<P.thuc<<"+("<<P.ao<<")i";
    return os;
}

//Phuong thuc cung cap so thuc
float CSoPhuc::getThuc(){
    return thuc;
}

//Phuong thuc cung cap so ao
float CSoPhuc::getAo(){
    return ao;
}

//Toan tu gan  
CSoPhuc& CSoPhuc::operator=(const CSoPhuc&P){
    thuc=P.thuc;
    ao=P.ao;
    return *this;
}

//Phuong thuc cap nhat tu so
void CSoPhuc::setThuc(float tthuc){
    thuc=tthuc;
}

//Phuong thuc cap nhat mau so
void CSoPhuc::setAo(float aao){
    ao=aao;
}

//Kiem tra hai phan so bang khong 
int CSoPhuc::isBangKhong(){
    if(thuc==0)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so bang nhau
int CSoPhuc::isBang(const CSoPhuc&P){
    if(thuc==P.thuc & ao==P.ao)
       return 1;
    else 
       return 0;
}

// Kiem tra hai phan so khong bang
int CSoPhuc::isKhongBang(const CSoPhuc&P){
    if(thuc!=P.thuc & ao!=P.ao)
       return 1;
    else 
       return 0;
}

int CSoPhuc::operator==(const CSoPhuc &x){
    if(thuc==x.thuc && ao==x.ao)
       return 1;
    else
       return 0;
};

int CSoPhuc::operator!=(const CSoPhuc &x){
    if(thuc!=x.thuc && ao!=x.ao)
       return 1;
    else
       return 0;
};

int CSoPhuc::operator>(const CSoPhuc &x){
    if(thuc>x.thuc && ao>x.ao)
       return 1;
    else
       return 0;
};

int CSoPhuc::operator<(const CSoPhuc &x){
    if(thuc<x.thuc && ao<x.ao)
       return 1;
    else
       return 0;
};

int CSoPhuc::operator>=(const CSoPhuc &x){
    if(thuc>=x.thuc && ao>=x.ao)
       return 1;
    else
       return 0;
};

int CSoPhuc::operator<=(const CSoPhuc &x){
    if(thuc<=x.thuc && ao<=x.ao)
       return 1;
    else
       return 0;
};

CSoPhuc CSoPhuc::operator+(CSoPhuc &x){
    CSoPhuc temp;
    temp.thuc=thuc+x.thuc;
    temp.ao=ao+x.ao;
    return temp;
}

CSoPhuc CSoPhuc::operator-(CSoPhuc &x){
    CSoPhuc temp;
    temp.thuc=thuc-x.thuc;
    temp.ao=ao-x.ao;
    return temp;
}

CSoPhuc CSoPhuc::operator*(CSoPhuc &x){
    CSoPhuc temp;
    temp.thuc=thuc*x.thuc-ao*x.ao;
    temp.ao=thuc*x.ao+ao*x.thuc;
    return temp;
}

CSoPhuc CSoPhuc::operator/(CSoPhuc &x){
    CSoPhuc temp;
    temp.thuc=((x.thuc*thuc)+(x.ao*ao))/(pow(x.thuc,2)+pow(x.ao,2));
    temp.ao=((x.thuc*ao)-(x.ao*thuc))/(pow(x.thuc,2)+pow(x.ao,2));
    return temp;
}

CSoPhuc CSoPhuc::operator+=(int phanso){
    CSoPhuc temp;
    temp.thuc=thuc+phanso;
    temp.ao=ao;
    return temp;
}

CSoPhuc CSoPhuc::operator-=(int phanso){
    CSoPhuc temp;
    temp.thuc=thuc-phanso;
    temp.ao=ao;
    return temp;
}


CSoPhuc CSoPhuc::operator*=(int phanso){
    CSoPhuc temp;
    temp.thuc=thuc*phanso;
    temp.ao=ao*phanso;
    return temp;
}

CSoPhuc CSoPhuc::operator/=(int phanso){
    CSoPhuc temp;
    temp.ao=ao/phanso;
    temp.thuc=thuc/phanso;
    return temp;
}

CSoPhuc::~CSoPhuc(){
    return;
}

int main(){
    
}



