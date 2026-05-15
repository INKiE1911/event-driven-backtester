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
    enum class Direction: std::uint8_t{
        Buy,
        Sell
    };
    enum class OrderType: std::uint8_t{
        Market,
        Limit
    };
    enum class SignalType: std::uint8_t{
        Long,
        Short,
        Exit
    };
    enum class Exchange: std::uint8_t{
        Nyse,
        Nasdaq,
        Arca,
        Smart
    }; 
}