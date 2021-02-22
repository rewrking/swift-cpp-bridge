# swift-cpp-bridge

Simple C++ to Swift example

After some hunting about how to handle calling Swift from C++ property, I found a lot of bad info online and decided to write this this small project with (almost) everything one would need to do this correctly.

Notes:
- Ensure any exported swift sources are compiled before any C-related sources (via "Compile Sources" in the Xcode project), so that the export header is created beforehand
- Only exported Swift function declarations are covered so far. Classes and and things like sharing memory between C++ and Swift won't be covered, because IMO that's more of a design topic
