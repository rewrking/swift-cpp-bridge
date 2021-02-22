//
// This file should contain the C++ api to call into Swift functions
//

#ifndef SWIFT_INTERPRETER_HPP
#define SWIFT_INTERPRETER_HPP

#include <string>
#include <string_view>

namespace swift
{
int sayHello(const std::string& inFirstName, const std::string_view& inLastName);
}

#endif // SWIFT_INTERPRETER_HPP
