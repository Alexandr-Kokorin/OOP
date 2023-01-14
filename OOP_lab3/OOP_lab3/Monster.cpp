#include "Monster.h"

Monster::Monster(int hp, int v) {
	HP = hp;
	this->v = v;
}

Monster::Monster(const Monster& st) {
	HP = st.HP;
}

Monster::~Monster() {}

int Monster::getHP() {
	return HP;
}