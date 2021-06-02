#include <memory>
#include "BankAccount.h"
#include "NoLogger.h"

using namespace std;

shared_ptr<Logger> BankAccount::noLog = make_shared<NoLogger>();



