//Структуры	                        Классы	                            Объединения
//Ключевое слово для класса : struct	Ключевое слово для класса : class	Ключевое слово для класса : union
//Доступ по умолчанию : public (открытый).Доступ по умолчанию : private (закрытый).Доступ по умолчанию : public (открытый).
//Нет ограничений на использование	Нет ограничений на использование	Используется только один член за один раз

struct complex
{
	void assign(double r, double i);
	void print() { cout << real << « + » << imag << «i»; }
private:
	double real;
	double imag;
};
void complex::assign(double r, double i = 0.0)
{
	real = r;
	imag = i;
}

class complex
{
	double real;
	double imag;
public:
	void assign(double r, double i);
	void print() { cout << real << « + » << imag << «i»; }
};
void complex::assign(double r, double i = 0.0)
{
	real = r;
	imag = i;
}