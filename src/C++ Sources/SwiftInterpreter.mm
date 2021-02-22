//
// In the implementation, convert C++ types to Objective-C types and then
// call the swift methods declared in the generated "(module)-Swift.h" header
//

#include "SwiftInterpreter.hpp"

#import <Foundation/Foundation.h>

#include "SwiftObjCBridge.hpp"
#include "ObjcTypes.h"

int swift::sayHello(const std::string& inFirstName, const std::string_view& inLastName)
{
    auto firstName = objc::make<NSString>(inFirstName);
    auto lastName = objc::make<NSString>(inLastName);

    NSInteger result = swift_sayHello(firstName, lastName);

    return static_cast<int>(result);
}

