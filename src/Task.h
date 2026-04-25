#ifndef TASK_H
#define TASK_H

#include <string>

class Task
{
public:
    Task(int id = 0, const std::string& title = "", bool completed = false);
    
    int id() const { return id_; }
    std::string title() const { return title_; }
    bool completed() const { return completed_; }
    
    void setTitle(const std::string& title) { title_ = title; }
    void setCompleted(bool completed) { completed_ = completed; }

private:
    int id_;
    std::string title_;
    bool completed_;
};

#endif