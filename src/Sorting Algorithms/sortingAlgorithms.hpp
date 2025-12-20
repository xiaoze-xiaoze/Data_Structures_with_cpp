#pragma once
#include <vector>
#include <functional>
#include <algorithm>
#include <utility>

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

/*
 冒泡排序 (Bubble Sort)：
     时间复杂度：O(n²) 最坏/平均情况，O(n) 最好情况（已排序）
     空间复杂度：O(1)
     稳定性：稳定
     原地排序：是
     思想：重复比较相邻元素，将较大元素向后移动
     适用场景：小规模数据，或者基本有序的数据
 */
template<typename T, typename Comparator>
void bubbleSort(std::vector<T>& vec, Comparator comp) {

}

/*
 选择排序 (Selection Sort)：
     时间复杂度：O(n²) 所有情况
     空间复杂度：O(1)
     稳定性：不稳定
     原地排序：是
     思想：每次选择最小（或最大）元素放到已排序序列末尾
     适用场景：小规模数据，移动成本较高的场景
 */
template<typename T, typename Comparator>
void selectionSort(std::vector<T>& vec, Comparator comp) {

}

/*
 插入排序 (Insertion Sort)：
     时间复杂度：O(n²) 最坏/平均情况，O(n) 最好情况（已排序）
     空间复杂度：O(1)
     稳定性：稳定
     原地排序：是
     思想：将未排序元素逐个插入到已排序序列的适当位置
     适用场景：小规模数据，或者基本有序的数据
 */
template<typename T, typename Comparator>
void insertionSort(std::vector<T>& vec, Comparator comp) {

}

/*
 希尔排序 (Shell Sort)：
     时间复杂度：O(n log n) ~ O(n²)，取决于增量序列
     空间复杂度：O(1)
     稳定性：不稳定
     原地排序：是
     思想：改进的插入排序，通过增量分组进行预排序
     适用场景：中等规模数据，对性能有一定要求
 */
template<typename T, typename Comparator>
void shellSort(std::vector<T>& vec, Comparator comp) {

}

/*
 归并排序 (Merge Sort)：
     时间复杂度：O(n log n) 所有情况
     空间复杂度：O(n)
     稳定性：稳定
     原地排序：否（需要额外空间）
     思想：分治法，将数组分成两半分别排序后合并
     适用场景：大规模数据，需要稳定排序的场景
 */
template<typename T, typename Comparator>
void mergeSort(std::vector<T>& vec, Comparator comp) {

}

/*
 快速排序 (Quick Sort)：
     时间复杂度：O(n log n) 平均情况，O(n²) 最坏情况
     空间复杂度：O(log n) ~ O(n)（递归栈空间）
     稳定性：不稳定
     原地排序：是
     思想：分治法，选择基准值将数组分成两部分递归排序
     适用场景：大规模数据，平均性能优秀
 */
template<typename T, typename Comparator>
void quickSort(std::vector<T>& vec, Comparator comp) {

}

/*
 堆排序 (Heap Sort)：
     时间复杂度：O(n log n) 所有情况
     空间复杂度：O(1)
     稳定性：不稳定
     原地排序：是
     思想：利用堆数据结构，每次取出最大（或最小）元素
     适用场景：大规模数据，需要保证最坏情况性能
 */
template<typename T, typename Comparator>
void heapSort(std::vector<T>& vec, Comparator comp) {

}

