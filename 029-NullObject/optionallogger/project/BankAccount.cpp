#include <memory>
#include "BankAccount.h"
#include "OptionalLogger.h"

using namespace std;

shared_ptr<Logger> BankAccount::noLog = make_shared<OptionalLogger>();

