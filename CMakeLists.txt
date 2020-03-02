project(ExampleRepo)
cmake_minimum_required(VERSION 3.9)
set(CMAKE_VERBOSE_MAKEFILE OFF)

set(DEFAULT_COMPILE_FEATURES cxx_std_17)

FIND_PACKAGE(glew)

add_executable(HelloWorld
    src/helloWorld.cpp)

target_compile_features(HelloWorld
    PRIVATE
        ${DEFAULT_COMPILE_FEATURES})

#add_executable(TestExample
    tests/test_example.cpp)

#target_compile_features(TestExample
#    PRIVATE
#        ${DEFAULT_COMPILE_FEATURES})

#target_compile_definitions(TestExample
#    PRIVATE
#        -DBOOST_TEST_MODULE=${TestName}
#        -DBOOST_TEST_DYN_LINK
#        )

#target_link_libraries(TestExample
#    Boost::unit_test_framework
#    )
#enable_testing()
#add_test("test::example" TestExample)
