#include <iostream>
#include <cmath>

using namespace std;

class CDiem {
private:
    float x, y;
public:
    CDiem();
    CDiem(float, float);
    CDiem(const CDiem&);
    ~CDiem();


    void inp();
    float distance(CDiem P);
    void outp();

    friend istream& operator>>(istream&, CDiem&);
    friend ostream& operator<<(ostream&, CDiem&);

};


CDiem::CDiem() 
{
    x = 0;
    y = 0;
}

CDiem::CDiem(float a, float b) 
{
    x = a;
    y = b;
}

CDiem::CDiem(const CDiem &P) 
{
    x = P.x;
    y = P.y;
}

CDiem::~CDiem() 
{
    return;
}



istream& operator>>(istream &is, CDiem &P)
{
    cout << "x = ";
    is >> P.x;
    cout << "y = ";
    is >> P.y;
    return is;
}

ostream& operator<<(ostream &os, CDiem &P)
{
    os << "( " << P.x << " , " << P.y << " )\n";
    return os;
}



void CDiem::inp() 
{
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}

void CDiem::outp(){
    cout << "(" << x << " , " << y << ")\n";
}

float CDiem::distance(CDiem P)
{
    return sqrt(pow(x - P.x, 2) + pow(y - P.y, 2));
}





class CTamGiac{
private: 
    CDiem A, B, C;
    float area, perimeter;
public:
    CTamGiac();
    CTamGiac(CDiem&, CDiem&, CDiem&);
    CTamGiac(const CTamGiac&);
    ~CTamGiac();


    void inp();
    void computeAttributes();
    void outp();

    //so sanh dien tich
    int operator> (CTamGiac&);
    int operator< (CTamGiac&);
    int operator>= (CTamGiac&);
    int operator<= (CTamGiac&);
    int operator== (CTamGiac&);
    int operator!= (CTamGiac&);

    //so sanh chu vi
    bool greater(CTamGiac&);
    bool less(CTamGiac&);
    bool equal(CTamGiac&);
    bool notEqual(CTamGiac&);
    bool greaterOrEqual(CTamGiac&);
    bool lessOrEqual(CTamGiac&);


    friend istream& operator>>(istream&, CTamGiac&);
    friend ostream& operator<<(ostream&, CTamGiac&);


};

CTamGiac::CTamGiac() 
{
    area = 0;
    perimeter = 0;
}

CTamGiac::CTamGiac(CDiem &P, CDiem &R, CDiem &S) 
{
    A = P;
    B = R;
    C = S;
    computeAttributes();
}

CTamGiac::CTamGiac(const CTamGiac& Tg) 
{
    A = Tg.A;
    B = Tg.B;
    C = Tg.C;
    computeAttributes();
}


istream& operator>>(istream &is, CTamGiac &T)
{
    cout << "nhap A:\n";
    is >> T.A;
    cout << "nhap B:\n";
    is >> T.B;
    cout << "nhap C:\n";
    is >> T.C;
    T.computeAttributes();
    return is;
}

ostream& operator<<(ostream &os, CTamGiac &T)
{
    os << "cac dinh tam giac:\nA " << T.A << "B " << T.B << "C " << T.C;
    return os;
}



void CTamGiac::inp() 
{
    cout << "nhap cac dinh:\nnhap A:\n";
    A.inp();
    cout << "nhap B:\n";
    B.inp();
    cout << "nhap C:\n";
    C.inp();
    computeAttributes();
}

void CTamGiac::outp()
{
    cout << "cac dinh tam giac:\nA ";
    A.outp();
    cout << "B ";
    B.outp();
    cout << "C ";
    C.outp();
}

void CTamGiac::computeAttributes(){
    perimeter = A.distance(B) + A.distance(C) + C.distance(B);
    float p = perimeter / 2;
    area = sqrt(p * (p - A.distance(B)) * (p - A.distance(C)) * (p - C.distance(B)));
}



int CTamGiac::operator> (CTamGiac &triangle)
{
    
    if (area > triangle.area)
    {
        return 1;
    }
    return 0;
    
}

int CTamGiac::operator< (CTamGiac &triangle)
{
    if (area < triangle.area)
    {
        return 1;
    }
    return 0;
}


int CTamGiac::operator== (CTamGiac &triangle)
{
   if (area == triangle.area)
    {
        return 1;
    }
    return 0;
    
}

int CTamGiac::operator!= (CTamGiac &triangle)
{
    if (area != triangle.area)
    {
        return 1;
    }
    return 0;
    
}

int CTamGiac::operator<= (CTamGiac &triangle)
{
    if (area <= triangle.area)
    {
        return 1;
    }
    return 0;
    
}

int CTamGiac::operator>= (CTamGiac &triangle)
{
    if (area >= triangle.area)
    {
        return 1;
    }
    return 0;
    
}



bool CTamGiac::greater(CTamGiac &triangle)
{
    
    if (perimeter > triangle.perimeter)
    {
        return 1;
    }
    return 0;
    
}

bool CTamGiac::less(CTamGiac &triangle)
{
    if (perimeter < triangle.perimeter)
    {
        return 1;
    }
    return 0;
}


bool CTamGiac::equal(CTamGiac &triangle)
{
   if (perimeter == triangle.perimeter)
    {
        return 1;
    }
    return 0;
    
}

bool CTamGiac::notEqual(CTamGiac &triangle)
{
    if (perimeter != triangle.perimeter)
    {
        return 1;
    }
    return 0;
    
}

bool CTamGiac::lessOrEqual(CTamGiac &triangle)
{
    if (perimeter <= triangle.perimeter)
    {
        return 1;
    }
    return 0;
    
}

bool CTamGiac::greaterOrEqual(CTamGiac &triangle)
{
    if (perimeter >= triangle.perimeter)
    {
        return 1;
    }
    return 0;
    
}


CTamGiac::~CTamGiac() 
{
    return;
}



int main(){
   
    CTamGiac Triangle1, Triangle2;
    Triangle1.inp();
    Triangle2.inp();
    if (Triangle1 != Triangle2)
    {
        cout << "\n!=";
    }
    if (Triangle1 >= Triangle2)
    {
        cout << "\n>=";
    }
    return 0;
}