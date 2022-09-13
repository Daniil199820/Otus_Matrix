cmake_minimum_required(VERSION 3.2)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})

project(Matrix VERSION ${PROJECT_VERSION})

add_executable(Matrix main.cpp)

set_target_properties(Matrix PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)


if (MSVC)

    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    target_compile_options(Matrix PRIVATE
        /W4
    )
else ()
    target_compile_options(Matrix PRIVATE
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


