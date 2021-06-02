#pragma once

class IntRange {
public:
	class iterator {
	public:
		iterator(int value, int inc) : m_value(value), m_inc(inc)  {}
	public:
		iterator &operator++();		
		bool operator ==(const iterator &r) const;
		bool operator !=(const iterator &r) const;
		int operator *() const;
		//...
	private:
		int m_value;
		int m_inc;
	};
public:	
	IntRange(int min, int max, int inc = 1);
public:
	int GetMin() const { return m_min; }
	int GetMax() const { return m_max; }
	iterator begin()
	{
		return iterator(m_min, m_inc);
	}
	iterator end()
	{
		return iterator(m_max + 1, m_inc);
	}
private:
	int m_min, m_max;
	int m_inc;
};

