#include "Fizika.h"

void Phizics::Fizika::calc_C()
{

		C = std::rand() % 495 + 5;
		C /= 100.0;
		C *= pow(10, -6);

	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::calc_L_zero()//���
{
	L_zero = std::rand() % 100;

	L_zero *= pow(10, -3);
	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::calc_R()//Om
{
	if (L / C < 0)
		std::cout << "ERRor #1\n";
	R_ = 2 * sqrt(L / C);

	R = R_ + 1;
	for (int i = 0; i < 300; i++) {// do 300 iterations, if we cann't find the num - leave cycle(it should not be loop!!)

		R = std::rand() % 90 + 5;


		if (R < R_) break; //R <R' stop the number search
	}
	if (!R < R_) R = R_ - 1; // if( i == 300) and (R >R')? we should be make synthetic numbers (=> R' - 1)


	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::calc_My()
{
	My = std::rand() % 990 + 10;

	L = My * L_zero;

	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::calc_U_zero()// B
{
	U_zero = std::rand() % 495 + 5;
	U_zero /= 100.0;

	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::calc_b()
{
	b = R / (2*L);

	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::calc_W_zero()
{
	if (L * C < 0)
		std::cout << "ERRor #2";
	W_zero = 1 / (sqrt(L * C));

	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::calc_W()
{
	if (pow(W_zero, 2) - pow(b, 2)  < 0)
		std::cout << "ERRor #3";
	W = sqrt(pow(W_zero, 2) - pow(b, 2));

	//throw gcnew System::NotImplementedException();
}

void Phizics::Fizika::set_code(short code)
{
	this->code = code;

	if (this->code == TASK_1)
		L = L_zero;
	if (this->code == TASK_2)
		calc_My();

	Start_calc();
}


double Phizics::Fizika::Y_U_calc()
{
	U = U_zero * exp(-8 * t) * cos(W * t);
	return U;
}

double Phizics::Fizika::error_time(double k)
{
	double end = (k * 1000) * 0.2;
	std::cout << "\n\\\\\\\\" << end << "////\n";
	double start = (k * 1000) * 0.05;
	int result = std::rand() % int(end);
	//int result = (std::rand() % (int(end) - int(start)) + int(start));
	return /*k +*/ result / 1000.0;
}