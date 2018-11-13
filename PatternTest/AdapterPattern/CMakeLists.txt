include_directories(${CMAKE_CURRENT_LIST_DIR})

add_executable(AdapterPattern SubjectOperation.h
        BinarySearch.h BinarySearch.cpp
        OperationAdapter.h OperationAdapter.cpp
        AdapterPattern_main.cpp QuickSort.cpp QuickSort.h)

