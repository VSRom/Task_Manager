#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include "Database.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addTask();
    void refreshTasks();
    void deleteTask();

private:
    void setupUI();
    void loadTasks();
    
    Database db_;
    QListWidget* taskList_;
    QLineEdit* taskInput_;
    QPushButton* addButton_;
    QPushButton* deleteButton_;
    QPushButton* refreshButton_;
};

#endif // MAINWINDOW_H