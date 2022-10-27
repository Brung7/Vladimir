#pragma once
template <typename T1, typename T2>
class Hand {
	T1 lefthand;
	T2 righthand;
public:
	Hand(T1 lefthand, T2 righthand) {
		this->lefthand = lefthand;
		this->righthand = righthand;
	}
	T1 getType() {
		return lefthand;
	}
	T2 getType2() {
		return righthand;
	}
	void setType(T1 weapon) {
		weapon = righthand;
	}
	void setType2(T2 weapon) {
		weapon = lefthand;
	}

};