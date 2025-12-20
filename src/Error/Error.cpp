#include "Error.hpp"

std::string error_message(DataStructureError error) {
    switch (error) {
        case DataStructureError::IndexOutOfRange: return "Index out of range";
        case DataStructureError::ContainerIsEmpty: return "Container is empty";
        case DataStructureError::ContainerIsFull: return "Container is full";
        case DataStructureError::InvalidArgument: return "Invalid argument";
        case DataStructureError::MemoryAllocationFailed: return "Memory allocation failed";
        case DataStructureError::ElementNotFound: return "Element not found";
        case DataStructureError::DuplicateValue: return "Duplicate value";
        case DataStructureError::CycleDetected: return "Cycle detected in graph";
        case DataStructureError::InvalidOperation: return "Invalid operation for this graph type";
        default: return "Unknown error";
    }
}