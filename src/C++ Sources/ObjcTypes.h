//
// Use this file to convert from C++ types to Objective-C types, if one wishes
//

#ifndef OBJC_TYPES_H
#define OBJC_TYPES_H

#import <Foundation/Foundation.h>

#include <type_traits>
#include <cassert>
#include <string>

namespace objc
{
template <typename To, typename From>
To* make(From&& inToConvert)
{
    using FromType = std::decay_t<From>;
    if constexpr(std::is_same_v<To, NSString> && std::is_same_v<FromType, std::string>)
    {
        return [NSString stringWithUTF8String:inToConvert.c_str()];
    }
    else if constexpr(std::is_same_v<To, NSString> && std::is_same_v<FromType, std::string_view>)
    {
        return [NSString stringWithUTF8String:inToConvert.data()];
    }
    else
    {
        assert(false && "Bad Objective-C conversion requested");
        static_cast<void>(inToConvert);
        return nullptr;
    }
}
}


#endif // OBJC_TYPES_H
