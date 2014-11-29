#include <iostream>
#include <string>
#include "FunctionSignature.hpp"

int test()
{
    return (42);
}

void test2(const std::string &test1)
{
    std::cout << "string " << test1 << std::endl;
}

int test3(const std::string &test1, int test2)
{
    std::cout << "string " << test1 << " and int "  << test2 << std::endl;
    return (42);
}

void test4(const std::string& test1, int test2, const std::string &test3)
{
    std::cout << "string " << test1 << " , int "  << test2 << " , and string " << test3 << std::endl;;
}

void test5(const std::string& test1, int test2, const std::string &test3, int test4)
{
    std::cout << "string " << test1 << " , int "  << test2 << " , and string " << test3 << " and int " << test4 << std::endl;;
}

int main()
{
    FunctionSignature<int ()>::type f = &test;
    FunctionSignature<void (const std::string&)>::type f2 = &test2;
    FunctionSignature<int (const std::string&, int)>::type f3 = &test3;
    FunctionSignature<void (const std::string&, int, const std::string&)>::type f4 = &test4;
    FunctionSignature<void (const std::string&, int, const std::string&, int)>::type f5 = &test5;

    std::cout << f() << " : retour de f()" << std::endl;;
    f2("Coucou");
    std::cout << f3("Coucou", 42) << " : retour de f3" << std::endl;
    f4("Coucou", 42, "blahblah");
    f5("Coucou", 42, "I'm the last test", 43);
}
