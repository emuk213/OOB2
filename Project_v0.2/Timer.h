#pragma once
#include "MyLib2.h"
class Timer {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
public:
    Timer() : start{ std::chrono::high_resolution_clock::now() } {}
    void reset() {
        start = std::chrono::high_resolution_clock::now();
    }
    double elapsed() const {
        return std::chrono::duration<double>(std::chrono::high_resolution_clock::now() - start).count();
    }
};

/*
class Timer {
public:
    Timer() : start_time_point(std::chrono::high_resolution_clock::now()) { }

    // Function to calculate elapsed time without resetting the start time
    double elapsed() const {
        auto end_time_point = std::chrono::high_resolution_clock::now();
        return std::chrono::duration<double>(end_time_point - start_time_point).count();
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time_point;
};*/