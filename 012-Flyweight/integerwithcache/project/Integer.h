#pragma once
#include <map>
#include <memory>

class Integer final {
public:
	int GetVal() const { return m_val; }
	static std::shared_ptr<Integer> ValueOf(int val);
private:
	Integer(int val = 0) : m_val(val)
	{}
private:
	int m_val;
	static std::map<int, std::shared_ptr<Integer>> ms_cache;
};

