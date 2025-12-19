#pragma once
#include <vector>
#include <functional>
#include <algorithm>
#include "../Error.hpp"

template<typename KeyExtractor>
static auto compare(KeyExtractor extractor);

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> bubbleSort(std::vector<T>& vec, Comparator comp = Comparator());

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> selectionSort(std::vector<T>& vec, Comparator comp = Comparator());

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> insertionSort(std::vector<T>& vec, Comparator comp = Comparator());

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> shellSort(std::vector<T>& vec, Comparator comp = Comparator());

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> mergeSort(std::vector<T>& vec, Comparator comp = Comparator());

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> quickSort(std::vector<T>& vec, Comparator comp = Comparator());

template<typename T, typename Comparator = std::less<T>>
static std::expected<void, DataStructureError> heapSort(std::vector<T>& vec, Comparator comp = Comparator());
