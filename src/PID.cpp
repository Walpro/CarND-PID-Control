#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	PID::Kp = Kp;
	PID::Ki = Ki;
	PID::Kd = Kd;
	cte_pre = 0;

}

void PID::UpdateError(double cte) {
	p_error = cte;
	i_error += cte;
	d_error = (cte-cte_pre);
	cte_pre = cte;
}

double PID::TotalError() {
	return -Kp*p_error -Ki*i_error -Kd *d_error;
}

