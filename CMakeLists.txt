cmake_minimum_required(VERSION 2.8)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})

project(Matrix VERSION ${PROJECT_VERSION})

find_package(GTest REQUIRED)

add_executable(Matrix main.cpp)
add_executable(TEST_lib test_lib.cpp)

set_target_properties(Matrix TEST_lib PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(TEST_lib PRIVATE ${GTEST_INCLUDE_DIRS})




target_link_libraries(TEST_lib PRIVATE
 ${GTEST_BOTH_LIBRARIES} pthread)



if (MSVC)

    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    target_compile_options(Matrix PRIVATE
        /W4
    )
    target_compile_options(TEST_lib PRIVATE
        /W4
    )
else ()
    target_compile_options(Matrix PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(TEST_lib PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()



install(TARGETS Matrix RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)

enable_testing()

add_test(TEST_lib TEST_lib)

