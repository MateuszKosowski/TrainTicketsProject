cmake_minimum_required(VERSION 3.4)
project(Library)

#Pliki do kompilacji aby powstały .obj
set(SOURCE_FILES
        src/model/Client.cpp
        include/typedefs.h
        src/model/Address.cpp
        src/model/Train.cpp
        src/model/Handcar.cpp
        src/model/MotorTrain.cpp
        src/model/HighSpeedTrain.cpp
        src/model/PassagerTrain.cpp
        src/model/ClientType.cpp
        test/ClientTest.cpp
        src/model/Route.cpp
        src/model/Station.cpp
        src/model/Ticket.cpp
        src/repositories/ClientRepository.cpp
        src/repositories/TrainRepository.cpp
        src/managers/TranManager.cpp
        src/managers/ClientManager.cpp

)
# Utwórz bibliotekę Client_Lib zawierającą kod Client.cpp i Client.h
add_library(Library ${SOURCE_FILES})

#Ta lini mówi, że katalog include będzie zawierał nagłówki dostępne dla użytkowników biblioteki Client a Client.cpp należy do tego projektu, więc wie, żeby szukać w /include i dalej trzeba podać
target_include_directories(Library PUBLIC include)

# Zezwala na testy czy coś

enable_testing()

#Daje znać CMake, że szukam biblioteki Boost i chce użyć komponentu unit_test_framework
find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)
find_package(Boost 1.60.0 COMPONENTS date_time REQUIRED)

#To sprawia, że nagłówki Boost są uwzględniane podczas kompilacji
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_FILES
    test/master.cpp
        test/ClientTest.cpp
        src/model/Client.cpp
        include/typedefs.h
        src/model/Address.cpp
        src/model/Train.cpp
        src/model/Handcar.cpp
        src/model/MotorTrain.cpp
        src/model/HighSpeedTrain.cpp
        src/model/PassagerTrain.cpp
        src/model/ClientType.cpp
        test/TrainTest.cpp
        test/StationTest.cpp
        test/TicketTest.cpp
) # tu w przyszłości będą dodawane pliki źródłowe testów

add_executable (LibraryTester ${SOURCE_TEST_FILES})

#dołącz bibliotekę z testowanymi klasami oraz bibliotekę boost.test do programu testów
target_link_libraries (LibraryTester
        Library
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

#dodaj test LibraryTest. Instrukcji cmake add_test może być wiele.
#Dodatkowe parametry wpływają na szczegółowość generowanego raportu. Standardowo znajduje się on w Testing/Temporary.
add_test(LibraryTest LibraryTester
        --report_level=detailed
        --log_level=all
        --color_output=yes
        )
        
add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
