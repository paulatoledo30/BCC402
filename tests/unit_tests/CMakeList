find_package(Catch2 QUIET)
if (NOT Catch2_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            Catch2
            GIT_REPOSITORY https://github.com/catchorg/Catch2
            GIT_TAG v2.13.7
    )
    FetchContent_GetProperties(Catch2)
    if (NOT catch2_POPULATED)
        FetchContent_Populate(catch2)
        add_subdirectory(${catch2_SOURCE_DIR} ${catch2_BINARY_DIR})
    endif()
endif()

add_executable(ut_estoque ut_estoque.cpp)
target_link_libraries(ut_estoque PRIVATE agendalib)
target_link_libraries(ut_estoque PRIVATE Catch2)
add_test(ut_estoque_test ut_estoque)