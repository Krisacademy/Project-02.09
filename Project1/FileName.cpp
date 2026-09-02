#include<iostream>
using namespace std;

class Car
{
private:
	string model;
	string engine;
	double price;
	int sp=0;
	string cond = "Optima";
public:
	void Move()
	{ 
		cout << "The car is moving at speed -> " << sp << "km/h\n";
	}
	void Start_car()
	{
		cout << "Start\n";
	}
	void Stop_car()
	{
		cout << "Stop\n";
	}
	void SpeedAdd(int a)
	{
		sp += a;
	}
	void SpeedMin(int a)
	{
		sp -= a;
	}
    
	void Cond_On()
	{
		cout << cond << " ON temp=20 C\n";
	}
	void Cond_OFF()
	{
		cout << cond << " OFF\n";
	}

	void Init(string mod, string eng, double pr, string c)
	{
		model = mod;
		engine = eng;
		price = pr;
		cond = c;
	}
	void PrintCar()
	{
		cout << "Model: " <<model<<endl;
		cout << "Engine: " << engine << endl;
		cout << "Price: " << price << endl;
		cout << "Cond: " << cond << endl;
	}
	///  Методы-аксессоры
	// модификатор  - инициализирует через параметр
	void SetPrice(int p)
	{
		if (p > price)
		{
			price = p;
		}		
	}  
	// инспектор - возврат значения конкретного поля
	int GetPrice()
	{
		return price;
	}
};

int main() // Client
{
	Car obj1;

	obj1.SetPrice(20000);
	obj1.PrintCar();

	int price = obj1.GetPrice();
	cout << price << endl;

}