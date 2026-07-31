#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Developer.h"
#include "Manager.h"
#include "Employee.h"

using namespace std;

int main()
{
    srand(time(0));

    Developer developerRole;
    Manager managerRole("Software");

    Employee employee1("Alice", &developerRole);
    Employee employee2("Bob", &managerRole);

    employee1.work();
    employee2.work();

    return 0;
}