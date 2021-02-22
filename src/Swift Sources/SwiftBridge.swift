//
//
//

import Foundation

@_cdecl("swift_sayHello")
public func sayHello(firstName: String, lastName: String) -> Int {
    print("Hello,", firstName, lastName, "...")
    print("This is Swift talking to you.")
    print("Enjoy your day. 😊\n")
    
    return 0
}
