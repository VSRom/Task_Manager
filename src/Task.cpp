#include "Task.h"

Task::Task(int id, const std::string& title, bool completed)
    : id_(id), title_(title), completed_(completed) {}