cmake_minimum_required(VERSION 3.16)
project(ds_demo LANGUAGES CXX)

# C++ 标准
# 对 MSVC 显式用 latest，才会写 <LanguageStandard>stdcpplatest</LanguageStandard>
if(MSVC)
    set(CMAKE_CXX_STANDARD 23)
    set(CMAKE_STANDARD_REQUIRED ON)
    # 强制附加预览开关双保险
    add_compile_options(/std:c++23preview)
else()
    set(CMAKE_CXX_STANDARD 23)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

# 头文件搜索路径
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src)

# 收集所有源文件
file(GLOB_RECURSE SCR_SRC "${CMAKE_SOURCE_DIR}/src/*.cpp")

# 生成可执行文件
add_executable(ds_demo ${SCR_SRC})

# 控制台子系统
if(MINGW)
    target_link_options(ds_demo PRIVATE -mconsole)
endif()

# MSVC 静态运行时
if(MSVC)
    target_compile_options(ds_demo PRIVATE
        $<$<CONFIG:Release>:/MT>   # Release 静态运行时
        $<$<CONFIG:Debug>:/MTd>)   # Debug 静态运行时
endif()