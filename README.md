# Task Manager - C++ Qt Application

Менеджер задач с графическим интерфейсом на C++ с использованием Qt и SQLite.

## Технологии

- **C++17**
- **Qt 6** (Widgets, Sql)
- **SQLite** (база данных)
- **CMake** (сборка)
- **Git** (контроль версий)

## Функции

- Добавление задач
- Просмотр списка задач
- Удаление задач
- Сохранение в базу данных SQLite

## Сборка

```bash
# Создать папку сборки
mkdir build
cd build

# Конфигурация CMake
cmake ..

# Сборка
cmake --build .

# Запуск
./TaskManager  # Linux/Mac
# или TaskManager.exe  # Windows