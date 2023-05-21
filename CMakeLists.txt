cmake_minimum_required(VERSION 3.25)
project(CommandDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(CommandDemo main.cpp lib/ICommand.h lib/commands/CreateCommand.h lib/Editor.h lib/commands/DeleteCommand.h)
