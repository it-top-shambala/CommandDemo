#include <iostream>

#include "./lib/commands/CreateCommand.h"
#include "./lib/commands/DeleteCommand.h"

#include "./lib/Editor.h"

using namespace std;

int main() {
    auto* editor = new Editor();
    editor->AddCommand("create", new CreateCommand(editor->GetContext()));
    editor->AddCommand("delete", new DeleteCommand(editor->GetContext()));

    cout << editor->GetContext() << endl;

    editor->ExecuteCommand("create");
    cout << editor->GetContext() << endl;

    editor->ExecuteCommand("delete");
    cout << editor->GetContext() << endl;

    return 0;
}
