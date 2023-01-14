#include <iostream>

class Monster {
private:
    int HP;
    int v;
public:
    Monster(int hp, int v);
    Monster(const Monster& st);
    ~Monster();
    int getHP();
};
