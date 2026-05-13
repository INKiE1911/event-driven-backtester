# event-driven-backtester

A high-performance backtesting framework with a C++ event loop and Python strategy layer.

## Architecture

```
MarketDataFeed → EventQueue → FillEngine → PortfolioTracker
                                  ↕
                         Python Strategy Layer
```

## Planned Stack

- **C++17** — event queue, fill engine, market data handler
- **Python** — strategy authoring, analytics
- **pybind11** — C++/Python bindings
- **CMake** — build system

## Status

> Work in progress. Reading phase — implementation not started.

- [ ] C++ event queue
- [ ] Market data handler (CSV)
- [ ] Fill model (slippage + commission)
- [ ] Python strategy interface via pybind11
- [ ] Portfolio tracker (P&L, drawdown)
- [ ] Example strategy

