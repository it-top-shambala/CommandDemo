#pragma once

#include <string>

using namespace std;

class ICommand {
public:
    virtual void Execute() = 0;
    virtual bool CanExecute() = 0;
};

