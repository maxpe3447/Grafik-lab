#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

//#define DEBUG_ALL_XY //has no definition
#define DEBUG_XY

namespace Phizics {

	class Fizika
	{
	public:
		double U_zero{}, W{}, W_zero{}, U{}, t{}, R{}, R_{}, C{}, L_zero{}, L{}, My{}, b{};
		short code{};
		static int const  TASK_1 = 1;
		static int const  TASK_2 = 2;
		//generation of num 
		void calc_C();

		void calc_L_zero();

		void calc_R();

		void calc_My(); // + L

		void calc_U_zero();

		// calculation by formulas
		void calc_b();

		void calc_W_zero();

		void calc_W();

		void Start_calc() {

			calc_R();

			calc_b();

			calc_W_zero();

			calc_W();

		}

	public:
		Fizika() {
			std::srand(std::time(NULL));
		}

		void for_rand() {

			calc_C();
			calc_L_zero();
			calc_U_zero();
		}

		void set_t(double time) { this->t = time / 1000.0; }

		void set_code(short code);

		double Y_U_calc();
	};
}