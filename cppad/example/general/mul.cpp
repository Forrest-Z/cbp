/* --------------------------------------------------------------------------
CppAD: C++ Algorithmic Differentiation: Copyright (C) 2003-17 Bradley M. Bell

CppAD is distributed under multiple licenses. This distribution is under
the terms of the
                    Eclipse Public License Version 1.0.

A copy of this license is included in the COPYING file of this distribution.
Please visit http://www.coin-or.org/CppAD/ for information on other licenses.
-------------------------------------------------------------------------- */
/*
$begin mul.cpp$$

$section AD Binary Multiplication: Example and Test$$
$mindex * multiply times$$


$code
$srcfile%example/general/mul.cpp%0%// BEGIN C++%// END C++%1%$$
$$

$end
*/
// BEGIN C++
# include <cppad/cppad.hpp>

bool Mul(void)
{	bool ok = true;
	using CppAD::AD;
	using CppAD::NearEqual;
	double eps99 = 99.0 * std::numeric_limits<double>::epsilon();

	// domain space vector
	size_t n  = 1;
	double x0 = .5;
	CPPAD_TESTVECTOR(AD<double>) x(n);
	x[0]      = x0;

	// declare independent variables and start tape recording
	CppAD::Independent(x);

	// some binary multiplication operations
	AD<double> a = x[0] * 1.; // AD<double> * double
	AD<double> b = a    * 2;  // AD<double> * int
	AD<double> c = 3.   * b;  // double     * AD<double>
	AD<double> d = 4    * c;  // int        * AD<double>

	// range space vector
	size_t m = 1;
	CPPAD_TESTVECTOR(AD<double>) y(m);
	y[0] = x[0] * d;          // AD<double> * AD<double>

	// create f: x -> y and stop tape recording
	CppAD::ADFun<double> f(x, y);

	// check value
	ok &= NearEqual(y[0] , x0*(4.*3.*2.*1.)*x0,  eps99 , eps99);

	// forward computation of partials w.r.t. x[0]
	CPPAD_TESTVECTOR(double) dx(n);
	CPPAD_TESTVECTOR(double) dy(m);
	dx[0] = 1.;
	dy    = f.Forward(1, dx);
	ok   &= NearEqual(dy[0], (4.*3.*2.*1.)*2.*x0, eps99 , eps99);

	// reverse computation of derivative of y[0]
	CPPAD_TESTVECTOR(double)  w(m);
	CPPAD_TESTVECTOR(double) dw(n);
	w[0]  = 1.;
	dw    = f.Reverse(1, w);
	ok   &= NearEqual(dw[0], (4.*3.*2.*1.)*2.*x0, eps99 , eps99);

	// use a VecAD<Base>::reference object with multiplication
	CppAD::VecAD<double> v(1);
	AD<double> zero(0);
	v[zero] = c;
	AD<double> result = 4 * v[zero];
	ok     &= (result == d);

	return ok;
}

// END C++
