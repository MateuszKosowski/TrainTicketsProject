cmake_minimum_required(VERSION 3.4)
project(Library)

#Pliki do kompilacji aby powstały .obj
set(SOURCE_FILES
    src/model/Client.cpp
    include/model/Client.h
)
# Utwórz bibliotekę Client_Lib zawierającą kod Client.cpp i Client.h
add_library(Library ${SOURCE_FILES})

#Ta lini mówi, że katalog include będzie zawierał nagłówki dostępne dla użytkowników biblioteki Client a Client.cpp należy do tego projektu, więc wie, żeby szukać w /include i dalej trzeba podać
target_include_directories(Library PUBLIC include)
