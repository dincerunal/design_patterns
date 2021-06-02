#pragma once
#include <string>
#include <memory>
#include "Logger.h"
#include "OptionalLogger.h"

class BankAccount {
public:
	BankAccount(int balance, const std::string &name, std::shared_ptr<Logger> logger = noLog)
		: m_balance(balance), m_name(name), m_logger(logger)
	{
		m_logger->Information("BankAccount object created");
	}

	std::string GetName() const
	{
		m_logger->Information("BankAccount GetName");

		return m_name;
	}

	int GetBalance() const 
	{
		m_logger->Information("BankAccount GetBalance");

		return m_balance;
	}

	void Deposit(int amount)
	{
		m_logger->Warning("BankAccount Deposit");
		m_balance += amount;
	}
	static std::shared_ptr<Logger> noLog;
	//...
private:
	int m_balance;
	std::string m_name;
	std::shared_ptr<Logger> m_logger;
};

