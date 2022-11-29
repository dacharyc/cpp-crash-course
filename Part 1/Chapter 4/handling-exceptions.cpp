#include <stdexcept>

// This handler catches any exception that inherits from std::exception, including a std::logic_error
try {
    throw std::logic_error{ "It's not about who wrong "
                            "it's not about who right"};
} catch (std::exception& ex) {
    // Handles std::logic_error as it inherits from std::exception
}

// The following special handler catches _any_exception regardless of type

try {
    throw 'z'; // Don't do this
} catch (...) {
    // Handles any exception, even a 'z'
}

// Chain catch statements to handle different types of exceptions originating from the same try block:
try {
    // Code that might throw an exception
} catch (const std::logic_error& ex) {
    // Log exception and terminate the program; there is a programming error!
} catch (const std::runtime_error& ex) {
    // Do our best to recover gracefully
} catch (const std::exception& ex) {
    // This will handle any exception that derives from std::exception
    // that is not a logic_error or a runtime_error
} catch (...) {
    // Panic; an unforeseen exception type was thrown
}

// You can use the throw keyword in a catch block to resume searching for an approapriate exception handler
try {
    // Some code that might throw a system error
} catch(const std::system_error& ex) {
    if(ex.code()!= std::errc::permission_denied) {
        // Not a permission denied error
        throw;
    }
    // Recover from a permission denied
}

// The above code can get unnecessarily convoluted. 
// You might instead define a new exception type and create a separate handler for the error.
try { 
    // Throw a PermissionDenied instead
} catch(const PermissionDenied& ex) {
    // Recover from an EACCES error (Permission Denied)
}

// You can and should mark a function that cannot possibly throw an exception as `noexcept`
bool is_odd(int x) noexcept {
    return 1 == (x % 2);
}

// If code throws an exception inside a function marked noexcept, the runtime calls the function std::terminate
// This function by default exits the program via abort. Your program cannot recover.
void hari_kari() noexcept {
    throw std::runtime_error{ "Goodbye, cruel world." };
}