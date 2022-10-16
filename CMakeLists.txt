cmake_minimum_required(VERSION 3.20.0)
project(ManipulateEXCEL)

if(NOT ${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    message(FATAL_ERROR "ONLY AVAILABLE ON WINDOWS") # 只可以在 windows 上构建 , 因为 .xls 转 .xlsx 的动态库只有 .dll 文件
endif()

# set(BOOST_ROOT "C:\\boost_1_80_0")
# find_package(Boost REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_11)

target_include_directories(${PROJECT_NAME} PRIVATE
    Include
    Include/icu/include
    Include/boost
    # ${Boost_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME}
    ${CMAKE_SOURCE_DIR}/lib64/Aspose.Cells.lib
    # ${Boost_LIBRARIES}
)

# 把 .dll 文件 复制到 exe 文件目录中
if(NOT EXISTS "${CMAKE_CURRENT_BINARY_DIR}/Release/Aspose.Cells.dll")
    list(APPEND EXE_FILE_LOCATION Release)
endif()

if(NOT EXISTS "${CMAKE_CURRENT_BINARY_DIR}/Debug/Aspose.Cells.dll")
    list(APPEND EXE_FILE_LOCATION Debug)
endif()

list(APPEND DLL_FILES
    icudt56.dll
    icuin56.dll
    icuuc56.dll
    Aspose.Cells.dll
    libtcmalloc_minimal.dll
)

# list(APPEND XLS_FILES example.xls)
foreach(LOCATION IN LISTS EXE_FILE_LOCATION)
    foreach(dll IN LISTS DLL_FILES)
        add_custom_command(
            TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_CURRENT_SOURCE_DIR}/lib64/${dll}
            ${CMAKE_CURRENT_BINARY_DIR}/${LOCATION}/${dll}
        )
    endforeach()

    add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_CURRENT_SOURCE_DIR}/xls/example.xls
        ${CMAKE_CURRENT_BINARY_DIR}/${LOCATION}/xls/example.xls
    )
endforeach()
