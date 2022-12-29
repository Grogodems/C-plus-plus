//���������	                        ������	                            �����������
//�������� ����� ��� ������ : struct	�������� ����� ��� ������ : class	�������� ����� ��� ������ : union
//������ �� ��������� : public (��������).������ �� ��������� : private (��������).������ �� ��������� : public (��������).
//��� ����������� �� �������������	��� ����������� �� �������������	������������ ������ ���� ���� �� ���� ���

struct complex
{
	void assign(double r, double i);
	void print() { cout << real << � + � << imag << �i�; }
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
	void print() { cout << real << � + � << imag << �i�; }
};
void complex::assign(double r, double i = 0.0)
{
	real = r;
	imag = i;
}