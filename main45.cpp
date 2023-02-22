#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <unistd.h>
using namespace std;

class Scanner {
    vector<char> buffer;
    ssize_t n_written;
    ssize_t n_read;

public:
    Scanner(): buffer(1024*1024) { do_read(); }

    int64_t read_int() {
        int64_t ret = 0, sgn = 1;
        int ch = current_char();
        while (isspace(ch)) { ch = next_char(); }
        if (ch == '-') { sgn = -1; ch = next_char(); }
        for (; isdigit(ch); ch = next_char())
            ret = (ret * 10) + (ch - '0');
        return sgn * ret;
    }

private:
    void do_read() {
        ssize_t r = read(0, &buffer[0], buffer.size());
        if (r < 0) {
            throw runtime_error(strerror(errno));
        }
        n_written = r;
        n_read = 0;
    }

    inline int next_char() {
        ++n_read;
        if (n_read == n_written) { do_read(); }
        return current_char();
    }

    inline int current_char() {
        return (n_read == n_written) ? EOF : buffer[n_read];
    }
};

int main() {
    Scanner scanner;
    int N = scanner.read_int();
    int M = scanner.read_int();
    int64_t sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            sum += scanner.read_int();
        }
    }
    cout << sum << '\n';
}
