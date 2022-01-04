add_executable(estoqueProject
        main.cpp
        ../sources/item/item.cpp ../sources/item/item.hpp)
target_link_libraries(estoqueProject PRIVATE estoque)