#pragma once

#include <iostream>

#include "../ICommand.h"

using namespace std;

class DeleteCommand : public ICommand {
private:
    string& _context;
public:
    explicit DeleteCommand(string& context) : _context(context) {}

    void Execute() override {
        _context = "";
    }

    bool CanExecute() override {
        return !_context.empty();
    }

};
