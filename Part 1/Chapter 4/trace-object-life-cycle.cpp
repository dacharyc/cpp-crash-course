#include <cstdio>

struct Tracer {
    Tracer(const char* name) : name{ name } {
        printf("%s constructed.\n", name);
    }
    ~Tracer() {
        printf("%s destructed.\n", name);
    }
private:
    const char* const name;
};

static Tracer t1{ "Static variable" };
thread_local Tracer t2{ "Thread-local variable" };

int main() {
    const auto t2_ptr = &t2;
    printf("A\n");
    Tracer t3{ "Automatic variable" };
    printf("B\n");
    // This example _intentionally_ leaks t4 - because you did not `delete`, the dynamic variable is not destructed
    const auto* t4 = new Tracer{ "Dynamic variable" };
    printf("C\n");
}