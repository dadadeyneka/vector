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
         
public:   
       double module();
       double*get_x();
       void set_x(double*new_x);
       double*get_y();
       void set_y(double*new_y);
       double*get_z();
       void set_z(double*new_z);
   
       vector();
       vector(double x, double y, double z);
       void show_vector();
       vector operator+(vector summ); //оператор перезагрузки +
       vector operator-(vector riz); //оператор перезагрузки -
       vector operator*(vector mnozhn); //оператор множення
};
void vector::show_vector()
{
     cout << x << showpos << y << z << noshowpos;
}
vector::vector()//задання вектора
{
    x = 0;
    y = 0;
    z=0;
} 
vector::vector(double x, double y, double z)// отримання даних про змінні вектора
{
    this->x = x;
    this->y = y;
     this->z = z;
}
double vector::module()// реалізація знаходження довжини вектора
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
{   vector a(-5, 4, 6);//створення ершого вектора
    vector b(1, -8, 4); //створення другого вектора
    cout << "Mu maemo dva vectora: " << '\n'; 
    cout << "a="; 
    a.show_vector(); //виведення на екран вектора а
    cout << "   ";
    cout << "b="; 
    b.show_vector(); //виведення на екран вектора б
    cout << '\n';
    cout << "Modul a=" << a.module() << '\n'; // виведення модуля першого вектора
    cout << "Modul b=" << a.module() << '\n'; //
    cout << "a + b = ";
    (a + b).show_vector(); //виведення суми
    cout << '\n';
    cout << "a - b = ";
    (a - b).show_vector(); //виведення різниці
    cout << '\n';
    cout << "a * b = "; 
    (a * b).show_vector(); // виведення добутку
    cout << '\n';
    cout << '\n';
    system("PAUSE");
        return 0;
}
  


 

