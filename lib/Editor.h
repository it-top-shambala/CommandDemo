#pragma once

#include <map>
#include <string>

#include "ICommand.h"

using namespace std;

class Editor {
private:
    string _context;
    map<string, ICommand*>* _commands;

public:
    Editor() {
        _commands = new map<std::string, ICommand *>;
    }

    void AddCommand(string name, ICommand* command) {
        _commands->insert(pair<string, ICommand*>(name, command));
    }

    void ExecuteCommand(string name) {
        auto command = _commands->at(name);
        if (command->CanExecute()) {
            command->Execute();
        }
    }

    string& GetContext() {
        return _context;
    }
};
