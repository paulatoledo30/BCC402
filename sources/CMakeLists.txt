add_library(estoque
        estoque/estoque.h
        estoque/estoque.cpp
        ../tests/unit_tests/ut_estoque.cpp item/item.cpp item/item.hpp)
target_include_directories(estoque PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})