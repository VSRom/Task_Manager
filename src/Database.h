#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <vector>
#include "Task.h"

class Database {
public:
    Database();
    ~Database();
    
    bool isOpen() const;
    bool addTask(const std::string& title);
    std::vector<Task> getAllTasks();
    bool updateTask(int id, const std::string& title, bool completed);
    bool deleteTask(int id);

private:
    QSqlDatabase db_;
};

#endif // DATABASE_H