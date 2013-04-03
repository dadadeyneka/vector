vector
======
програма повинна виконувати основні дії з векторами (поелементне додавання, 
поелементне віднімання, 
сколярний добуток векторів, 
множенняна на число, 
знаходження перпендикулярних векторів (косинус кута між ними дорівює 0, тобто сколярний добуток їх дорівнює 0),
знаходження кута між векторами,
довжина вектора,
додавання елементів в кінець вектора,
сортування вектора,
видалення однакових елементів вектора)
потрібна допомога з перезагрузкою операторів (
приклад 
public:
       Vektor();//конструктор "по умолчанию"
  ~Vektor();//деструктор
	Vektor(int x);//конструктор "по размеру вектора"
	Vektor(const Vektor& v);//копирующий конструктор
	Vektor operator+ (const Vektor v);//перегрузка оператора +
	Vektor operator- (const Vektor v);//перегрузка оператора -
	Vektor operator* (const Vektor v);//перегрузка оператора *
	Vektor operator* (const int x);//перегрузка оператора *
	int& operator [] (int x);//перегрузка оператора индексирования
    bool operator== (const Vektor v);//перегрузка оператора сравнения
	Vektor operator+= (Vektor v);//перегрузка оператора +=
	Vektor operator-= (Vektor v);//перегрузка оператора -=
	Vektor operator*= (Vektor v);//перегрузка оператора *=
	Vektor operator*= (int x);//перегрузка оператора *=
	Vektor operator= (const Vektor v);//перегрузка оператора =
	bool operator!= (Vektor v);//перегрузка оператора !=
	friend std:: ostream& operator<< (std:: ostream& s, const Vektor v);//метод вывода
private:
	int* vek;
	int length;
};)


