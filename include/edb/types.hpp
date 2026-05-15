#pragma once 
#include <cstdint>
#include <chrono>
namespace edb
{
    using Timestamp = std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>;
    struct SymbolId
    {
        std::uint32_t id;
    };
    
}