#include <fmt/core.h>
#include <span>

int app(std::span<const std::string_view> args) {
    fmt::print("Hello, World!\n");

    if (args.empty()) {
        fmt::print("App started with {} arguments\n", args.size());
        for (const auto& arg : args) {
            fmt::print("Argument: {}\n", arg);
        }
    }

    return 0;
}
