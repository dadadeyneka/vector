#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
class vector
{
protected:

          double x;
          double y;
          double z;
          double k;
public:   
       double module();
       double skaldobutok(vector scal);
       double*get_x();
       void set_x(double*new_x);
       double*get_y();
       void set_y(double*new_y);
       double*get_z();
       void set_z(double*new_z);
   
       vector();
       vector(double x, double y, double z);
       void show_vector();
       vector operator+(vector summ); //aiaaaaiiy aaeoi??a
       vector operator-(vector riz); //a?ai?iaiiy aaeoi??a
       vector operator*(vector mnozhn); //iii?aiiy aaeoi?a ia neaey?
};
void vector::show_vector()
{
     cout << x << showpos << y << z << noshowpos;
}
vector::vector()// ?aae?cao?y eiino?oeoi?a aac ia?aiao??a
{
    x = 0;// iaioey?ii ii?aoeia? cia?aiiy a?enii? oa oyaii? ?anoei
    y = 0;
    z=0;
} 
vector::vector(double x, double y, double z)// ?aae?cao?y eiino?oeoi?a c ia?aiao?aie
{
    this->x = x;
    this->y = y;
     this->z = z;
}
double vector::module()// реалізація знаходження модуля від вектора
{ 
    return (x*x + y*y+z*z);
}  
vector vector::operator+(vector summ)
       {
       vector new_summ (x+summ.x, y+summ.y, z+summ.z);
       return new_summ;
       }
vector vector::operator-(vector riz)
       {
       vector new_riz(x-riz.x, y-riz.y, z-riz.z);
       return new_riz;
       }
vector vector::operator*(vector mnozhn)
       {vector new_mnozhn(x*mnozhn.x, y*mnozhn.y, z*mnozhn.z);
       return new_mnozhn;
       }
 int main()
{   vector k (2,2,3);
    vector a(-5, 4, 6);//Caaa?ii ii?aoeia? cia?aiiy ia?oiai eiiieaeniiai ?enea
    vector b(1, -8, 4); //Caaa?ii ii?aoeia? cia?aiiy a?oaiai eiiieaeniiai ?enea
    cout << "Mu maemo dva vectora: " << '\n'; 
    cout << "a="; 
    a.show_vector(); // aeaiaeii ia?oa eiiieaenia ?enei ia ae?ai
    cout << "   ";
    cout << "b="; 
    b.show_vector(); // aeaiaeii a?oaa eiiieaenia ?enei ia ae?ai
    cout << '\n';
    cout << "Modul a=" << a.module() << '\n'; // виведення модуля першого вектора
    cout << "Modul b=" << a.module() << '\n'; //
    cout << "a + b = ";
    (a + b).show_vector(); // Aeaaaaiiy ?acoeuoao?a ?aae?cao?? i?ioano aiaaaaiiy
    cout << '\n';
    cout << "a - b = ";
    (a - b).show_vector(); // Aeaaaaiiy ?acoeuoao?a ?aae?cao?? i?ioano a?ai?iaiiy
    cout << '\n';
    cout << "a * b = "; 
    (a * b).show_vector(); // Aeaaaaiiy ?acoeuoao?a ?aae?cao?? i?ioano iii?aiiy
    cout << '\n';
    cout << '\n';
    system("PAUSE");
        return 0;
}

  


 

