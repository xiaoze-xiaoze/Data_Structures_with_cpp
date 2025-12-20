#pragma once
#include <string>
#include <expected>

#define TRY(var, expr) \
    auto var##Result = (expr); \
    if (!var##Result) return std::unexpected(var##Result.error()); \
    auto var = var##Result.value()

enum class DataStructureError {
    IndexOutOfRange,
    ContainerIsEmpty,
    ContainerIsFull,
    InvalidArgument,
    MemoryAllocationFailed,
    ElementNotFound,
    DuplicateValue,
    CycleDetected,
    InvalidOperation
};

std::string error_message(DataStructureError e);