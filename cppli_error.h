
#pragma once

#include <stdexcept>

namespace cppli {
    class error : public std::runtime_error {
    private:
        int error_code_;
    public:

        inline int error_code() const {
            return error_code_;
        }

        inline error(const std::string& what, int error_code) : std::runtime_error(what), error_code_(error_code) {}
        inline error(const char*        what, int error_code) : std::runtime_error(what), error_code_(error_code) {}

    };
}