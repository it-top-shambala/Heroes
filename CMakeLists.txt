cmake_minimum_required(VERSION 3.25)
project(Heroes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Heroes main.cpp lib/models/Hero.h lib/models/Persian/Persian.h lib/models/Roman/Roman.h lib/models/IMagician.h lib/models/IWarrior.h lib/models/Persian/PersianMagician.h lib/models/Roman/RomanMagician.h lib/models/Roman/RomanWarrior.h lib/models/Persian/PersianWarrior.h lib/helpers/ConsoleHelper.h)
