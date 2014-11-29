project(test_functor_type)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/..)

add_executable(
	./test_functor_type
	FunctionSignature.hpp
	main.cpp
	)