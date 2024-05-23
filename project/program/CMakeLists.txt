cmake_minimum_required(VERSION 3.4)

project(Program)

# Ustaw we własnej zmiennej SOURCE_FILES zbiór plików źródłowych projektu .cpp
set(SOURCE_FILES src/main.cpp)

# Włącz powyższy zbiór plików do zbudowania programu wykonywalnego Program. Program to będzie mój ".exe"
add_executable(Program ${SOURCE_FILES})

# Określenie zależności pomiędzy projektami Program i Library - oznacza to, że projekt Program będzie mógł korzystać z rzeczy z Library
target_link_libraries(Program Library)

# Dołącz katalog include podprojektu Program do globalnej listy. Dzięki temu każdy inny podprojekt będzie ten katalog "widział"
target_include_directories(Program PUBLIC include)
