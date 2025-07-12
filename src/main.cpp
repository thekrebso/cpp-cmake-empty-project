#include <fmt/core.h>
#include <span>
#include <string_view>
#include <vector>

int app(std::span<const std::string_view> args);

int main(const int argc, const char* argv[]) {
    return app(std::vector<std::string_view>(argv + 1, argv + argc));
}
