//PROBLEMA 1 


#include <memory>
#include <iostream>
int main()
{
	double* d = new double(1.0); // crea un puntero d de tipo double
	Point* pt = new Point(1.0, 2.0); // crea un puntero pt que recibe 2
	parametros
		*d = 2.0;//asigna memoria al puntero d.
	(*pt).X(3.0);//asigna meoria a pt
	(*pt).Y(3.0);//asigna memoria a pt
	pt->X(3.0);// pt apunta a en x 3.0
	pt->Y(3.0);// pt apunta en y 3.0
	delete d; // elimina la memoria puntero d
	delete pt; // elimina la memoria puntero pt
	
	system("pause");
	return 0;
}

//PROBLEMA 2

#include <memory>
#include <iostream>

class Punto
{
public:
	Punto(double x, double y) : x(x), y(y) {};
private:
	double x{}, y{};
};

int main()
{
	std::unique_ptr<double> d{ new double(1.0) };
	std::unique_ptr<Punto> Point{ new Punto(1.0,2.0) };
	*d=2.0;
	return 0;
}


//PROBLEMA 3 



#include <memory>
#include <iostream>

class Punto
{
public:
	Punto(double x, double y) : x(x), y(y) {};
private:
	double x{}, y{};
};

int main()
{
	std::unique_ptr<double> d{ new double(1.0) };
	std::unique_ptr<Punto> Point{ new Punto(1.0,2.0) };
	*d=2.0;
	return 0;
}


//PROBLEMA 4


#include <memory>
#include <iostream>
using namespace std;
class C2{
};
class C1
{
private:
	double x{},y{};
	std::shared_ptr<double> d;
public:
	C1(double x,double y):x(x),y(y){};
	C1(std::shared_ptr<double> value) : d(value) {}
	virtual ~C1() { cout << "\nC1 destructor\n"; }
	void print() const { cout << "Valor " << *d; }
};
int main()
{
	std::shared_ptr<C2> d(new C2());
	std::shared_ptr<C1>punto{new C1(2,1)};
	
	return 0;
}



//PROBLEMA 5


#include <memory>
#include <iostream>

using namespace std;

class C2{
public:
	C2()=default;
	C2(std::string nombre):nombre(nombre){};
	~C2(){}
	void set_amigo(std::shared_ptr<C2> p){
		this->amigo=p;
	}
	void print_amigo(){
		std::cout<<"el amigo de "<<nombre<<"es "<<amigo->nombre<<std::endl;
	}
private:
std::string nombre{"ebert"};
std::shared_ptr<C2>amigo;
	
};
class C1
{
private:
	double x{},y{};
	std::shared_ptr<double> d;
public:
	C1(double x,double y):x(x),y(y){};
	C1(std::shared_ptr<double> value) : d(value) {}
	virtual ~C1() { cout << "\nC1 destructor\n"; }
	void print() const { cout << "Valor " << *d; }
};

int main()
{
	std::shared_ptr<C2> d(new C2());
	std::shared_ptr<C1>punto{new C1(2,1)};
	
	std::shared_ptr<C2> A = std::make_shared<C2>("ebert");
	std::shared_ptr<C2> B = std::make_shared<C2>("luis");
	
	A->set_amigo(B);
	B->set_amigo(A);
	A->print_amigo();

	
	return 0;
}
