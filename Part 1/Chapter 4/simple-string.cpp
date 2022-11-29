#include <stdexcept>
#include <cstdio>
#include <cstring>

struct SimpleString {
    SimpleString(size_t max_size) 
        : max_size{ max_size },
            length() {
        if (max_size == 0) {
            throw std::runtime_error{ "Max size must be at least 1." };
        }
        buffer = new char[max_size];
        buffer[0] = 0;
    }

    ~SimpleString() {
        delete[] buffer;
    }

    void print(const char* tag) const {
        printf("%s: %s", tag, buffer);
    }

    bool append_line(const char* x) {
        const auto x_len = strlen(x);
        if (x_len + length + 2 > max_size) return false;
        std::strncpy(buffer + length, x, max_size - length);
        length += x_len;
        buffer[length++] = '\n';
        buffer[length] = 0;
        return true;
    }
private:
    size_t max_size;
    /* The SimpleString owns a resource - the memory pointed to it by buffer.
     * The destructor deallocates buffer.
     * Because it pairs the allocation and deallocation of vuffer with the constructor and destructor
     * of SimpleString, you'll never leak the storage.
     * This pattern is called "resource acquisition is initialization (RAII)" or "constructor acquires, destructor releases (CADRe)".
     */
    char* buffer;
    size_t length;
};

struct SimpleStringOwner {
    SimpleStringOwner(const char* x)
        : string{ 10 } {
            if (!string.append_line(x)) {
                throw std::runtime_error{ "Not enough memory!" };
            }
        string.print("Constructed");
    }
    ~SimpleStringOwner() {
        string.print("About to destroy");
    }
private:
    SimpleString string;
};

int main() {
    SimpleString string{ 115 };
    string.append_line("Starbuck, whaddya hear?");
    string.append_line("Nothin' but the rain.");
    string.print("A");
    string.append_line("Grab your gun and brign the cat in.");
    string.append_line("Aye-aye sir, coming home.");
    string.print("B");
    if (!string.append_line("Galactica!")) {
        printf("String was not big enough to append another message.\n");
    }

    SimpleStringOwner x{ "x" };
    printf("x is alive\n");
}