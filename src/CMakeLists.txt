include_directories(${SOPHIE_SOURCE_DIR}/NLP/include ${SOPHIE_SOURCE_DIR}/src/include)

link_directories(${SOPHIE_BINARY_DIR}/NLP)

add_executable(sophie Sophie.cpp)

target_link_libraries(sophie nlp.o)
