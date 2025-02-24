# std::vector<bool> Gotchas

This repository demonstrates potential issues with using `std::vector<bool>` in C++ and provides alternative solutions. `std::vector<bool>` is a specialized container that is often not as efficient or intuitive as other options.  This example highlights performance differences and potential unexpected behaviors resulting from its specialized implementation.

## Issues:

* **Non-standard implementation:** `std::vector<bool>` has a non-standard implementation that may lead to unexpected behavior compared to other standard containers.
* **Performance:** `std::vector<bool>` may not be as performant as other containers like `std::vector<char>` for certain operations.
* **Memory Efficiency:** While designed for memory efficiency, this isn't always the case.
* **Iterator Behavior:** Iterators might behave differently than for regular vectors.

## Alternatives:

- `std::vector<char>` (treat each char as boolean, 8 booleans per char for memory efficiency)
- `std::bitset` (for more control and memory efficiency if dealing with large sets of booleans)
- `std::vector<int>` (for simple cases, though less memory efficient)

This example highlights scenarios where these alternatives might perform and behave better.