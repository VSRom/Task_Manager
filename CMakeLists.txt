cmake_minimum_required(VERSION 3.16)
project(TaskManager VERSION 1.0 LANGUAGES CXX)

# Стандарт C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Настройки для Debug режима (максимум отладочной информации)
if(MSVC)
    # Включаем отладочную информацию
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Zi")
    # Отключаем оптимизацию для корректной отладки
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Od")
    # Включаем проверки итераторов (помогает ловить ошибки векторов)
    add_definitions(-D_ITERATOR_DEBUG_LEVEL=2)
endif()

# Найти Qt 6 (обязательно Widgets и Sql)
find_package(Qt6 COMPONENTS Widgets Sql REQUIRED)

# Автоматическая обработка Qt (MOC, UIC, RCC)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Исходные файлы (проверь что имена совпадают с реальными файлами!)
set(SOURCES
    src/Main.cpp
    src/Task.cpp
    src/Database.cpp
    src/Main_Window.cpp
)

# Заголовочные файлы
set(HEADERS
    src/Task.h
    src/Database.h
    src/Main_Window.h
)

# Создать исполняемый файл
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Подключить библиотеки Qt
target_link_libraries(${PROJECT_NAME} PRIVATE 
    Qt6::Widgets 
    Qt6::Sql
)
