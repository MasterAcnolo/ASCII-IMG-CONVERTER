# Utiliser une version stable de CMake
cmake_minimum_required(VERSION 3.10)

# Définir le projet
project(ASCII_IMG_CONVERTER)

# Utiliser C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Forcer l'utilisation de g++ si nécessaire
set(CMAKE_CXX_COMPILER g++)

# Ajouter l'exécutable
add_executable(ASCII_IMG_CONVERTER ASCII_IMG_CONVERTER.cpp)

# Éviter la suppression automatique des fichiers
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
