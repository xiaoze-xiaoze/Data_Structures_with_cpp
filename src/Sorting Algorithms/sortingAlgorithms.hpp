#pragma once
#include <vector>
#include <functional>
#include <algorithm>
#include "../Error.hpp"

template<typename KeyExtractor>
static auto compareAsc(KeyExtractor extractor) {
    return [extractor](const T& a, const T& b) {
        return extractor(a) < extractor(b);
    };
}

template<typename KeyExtractor>
static auto compareDesc(KeyExtractor extractor) {
    return [extractor](const T& a, const T& b) {
        return extractor(a) > extractor(b);
    };
}

template<typename T, typename Comparator>
static std::expected<void, DataStructureError> bubbleSort(std::vector<T>& vec, Comparator comp);

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> selectionSort(std::vector<T>& vec, Comparator comp);

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> insertionSort(std::vector<T>& vec, Comparator comp);

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> shellSort(std::vector<T>& vec, Comparator comp);

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> mergeSort(std::vector<T>& vec, Comparator comp);

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> quickSort(std::vector<T>& vec, Comparator comp);

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> heapSort(std::vector<T>& vec, Comparator comp);

