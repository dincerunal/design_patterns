#pragma once
class Creature {
public:
	Creature(int attack, int defence) : m_attack(attack), m_defence(defence) {}
public:
	void SetAttack(int attack);
	void SetDefence(int defence);
	int GetAttack() const { return m_attack; }
	int GetDefence() const { return m_defence; }
private:
	int m_attack;
	int m_defence;
	//...
};

