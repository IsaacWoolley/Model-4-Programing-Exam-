#ifndef ROLE_H
#define ROLE_H

#include <string>
using namespace std;

class Role
{
protected:
    string title;

public:
    Role();
    Role(string title);

    void setTitle(string title);
    string getTitle() const;

    virtual void performTask() = 0;

    virtual ~Role();
};

#endif