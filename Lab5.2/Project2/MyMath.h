#pragma once

class MyMath {

public:
	static int counter;
	static int Add(int x, int y) {
		counter++;
		return x + y;
	}
	static int Sub(int x, int y) {
		counter++;
		return x - y;
	}
	static int Mult(int x, int y) {
		return x * y;
	}
	static int Div(int x, int y) {
		counter++;
		return x / y;
	}
};
