#include "Account.class.hpp"
#include <iostream>

Account::Account( int initial_deposit )
		: _nbDeposits (0)
		, _nbWithdrawals (0)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:"
			  << _accountIndex
			  << ";"
			  << "amount:"
			  << _amount
			  << ";created"
			  << std::endl;
	_nbAccounts++;
}
Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:"
			  << _accountIndex
			  << ";"
			  << "amount:"
			  << _amount
			  << ";closed"
			  << std::endl;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const{
	return _amount;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:"
			  << _nbAccounts
			  << ";total:"
			  << _totalAmount
			  << ";deposits:"
			  << _totalNbDeposits
			  << ";withdrawals:"
			  << _totalNbWithdrawals
			  << std::endl;
}

void Account::_displayTimestamp( void ){
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time (&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
	std::string str(buffer);

	std::cout << str;

	return;
}

void	Account::makeDeposit( int deposit ){
	int tmp = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:"
			  << _accountIndex
			  << ";p_amount:"
			  << tmp
			  << ";deposit:"
			  << deposit
			  << ";amount:"
			  << _amount
			  << ";nb_deposits:"
			  << _nbDeposits
			  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	int tmp = _amount;
	_displayTimestamp();
	std::cout << "index:"
			  << _accountIndex
			  << ";p_amount:"
			  << tmp;
	if ((_amount - withdrawal) < 0){
		std::cout << ";withdrawal:refused"
				  << std::endl;
		return false;
	} else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals += _nbWithdrawals;
		std::cout << ";withdrawal:"
				  << withdrawal
				  << ";amount:"
				  << _amount
				  << ";nb_withdrawals:"
				  << _nbWithdrawals
				  << std::endl;
		return true;
	}
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:"
			  << _accountIndex
			  << ";amount:"
			  << _amount
			  << ";deposits:"
			  << _nbDeposits
			  << ";withdrawals:"
			  << _nbWithdrawals
			  << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
