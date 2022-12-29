cmake_minimum_required(VERSION 3.1)

# так пишутся комментарии

project(project_name)

find_library(PTHREAD_LIBRARY pthread)
find_library(PCRE_LIBRARY pcre)

include_directories(include)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(main src / Main.cpp src / HttpServer.cpp)

target_link_libraries(main ${ PTHREAD_LIBRARY } ${ PCRE_LIBRARY })

mkdir build
cd build
cmake ..
make

mkdir build
cd build
cmake ..
make

cmake - G "Unix Makefiles" ..
cmake - G "MinGW Makefiles" ..
# для просмотра списка всех доступных генераторов :
cmake - G

cmake - G Ninja ..
ninja - j1

cmake - DCMAKE_BUILD_TYPE = Release - G Ninja ..
cmake - DCMAKE_BUILD_TYPE = RelWithDebInfo - G Ninja ..
cmake - DCMAKE_BUILD_TYPE = MinSizeRel - G Ninja ..
# Debug используется по умолчанию
cmake - DCMAKE_BUILD_TYPE = Debug - G Ninja ..

cmake --build . --config Release --target main

cmake - DCMAKE_C_COMPILER = `which clang` \
- DCMAKE_CXX_COMPILER = `which clang++` - G Ninja ..

cmake - DCMAKE_C_FLAGS = "-O0 -g" - DCMAKE_CXX_FLAGS = "-O0 -g" ..

cmake - DCMAKE_C_FLAGS = "-O0 -g -fprofile-arcs -ftest-coverage" \
- DCMAKE_EXE_LINKER_FLAGS = "-lgcov" ..

cmake_minimum_required(VERSION 2.8)

project(c - algorithms - examples)

include_directories(deps / algorithms / include)
add_subdirectory(deps / algorithms / src)

add_executable(rbtree_example rbtree_example.c)
target_link_libraries(rbtree_example CAlgorithms)

cmake_minimum_required(VERSION 2.8)

project(c - algorithms - examples)

include_directories(deps / algorithms / include)
add_subdirectory(deps / algorithms / src)

add_executable(rbtree_example rbtree_example.c)
target_link_libraries(rbtree_example CAlgorithms)


cmake_minimum_required(VERSION 2.8)

project(c - algorithms - examples)

include_directories(deps / algorithms / include)
add_subdirectory(deps / algorithms / src)

add_executable(rbtree_example rbtree_example.c)
target_link_libraries(rbtree_example CAlgorithms)

cmake_minimum_required(VERSION 2.8)

project(c - algorithms - examples)

include_directories(deps / algorithms / include)
add_subdirectory(deps / algorithms / src)

add_executable(rbtree_example rbtree_example.c)
target_link_libraries(rbtree_example CAlgorithms)

make test
# или, с включением отладочного вывода :
make test ARGS = "-V"
# или, если используете Ninja :
ninja test

find_package(PythonInterp REQUIRED)

enable_testing()

add_test(NAME python_test
    COMMAND py.test --capture = no ${ CMAKE_SOURCE_DIR } / tests / run.py)

    cmake - DLLDB_DISABLE_CURSES:BOOL = TRUE ...
    cmake - DASSIMP_BUILD_ASSIMP_TOOLS = OFF ...

ccmake .