using namespace std;

int main(int argc, char *argv[])
class vector;
     {double x,y,z;
public:
       vector();
       vector(double x, double y, double z);
       ~vector();
friend:
       vector operator+(vector a, vector b); //додавання векторів
       vector operator-(vector a, vector b); //віднімання векторів
       vector operator*(vector a, double scalar); //множення вектора на скаляр
        double operator*(vector a, vector b); //скалярний добуток векторів
       double abs(vector a, vector b); //модуль вектора
};


vector operation+(vector a, vector b);
       {vector summ;
       summ.x=x.a+x.b;
       summ.y=a.y+b.y;
       summ.z=a.z+b.z;
       return summ;
       cout>>vector summ;}
vector operation-(vector a, vector b);
       {vector diff;
       diff.x=a.x-b.x;
       diff.y=a.y-b.y;
       diff.x=a.z-b.z;
       return diff;
       cout>> vector diff;}
vector operation*(vector a,double scalar);
       {vector scal;
       scal.x=a.x*scalar;
       scal.y=a.y*scalar;
       scal.z=a.z*scalar;
       return scal;
       cout>> vector scal;}
double operation*(vector a, vector b);
       {double k;
       k=a.x*b.x+a.y*b.y+a.z*b.z;
       return k;
       cout>>"k=%lf";
       if (scolar==0) \\перпендикулярність векторів
       cout>>"perpendicularny"}}
double abs(vector a, vector b);
       {asb=sqrt(a.x*b.x+a.y*b.y+a.z*b.z);
       return abs;
       cout>>"abs=%lf";}

    system("PAUSE");
    return EXIT_SUCCESS;
}
