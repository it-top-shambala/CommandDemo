#pragma once

#include <iostream>

#include "../ICommand.h"

using namespace std;

class CreateCommand : public ICommand {
private:
    string& _context;
public:
    explicit CreateCommand(string &context) : _context(context) {}

    void Execute() override {
        this->_context = "Context created";
    }

    bool CanExecute() override {
        return _context.empty();
    }

};
