cmake_minimum_required( VERSION 3.1.0 )

project(
    Muscular-kernel
    LANGUAGES C CXX
)

include_directories(
    /usr/local/include
)

add_definitions(
    -D__FLATJSON__CHILDS_TYPE=std::uint32_t
    -D__FLATJSON__VLEN_TYPE=std::uint32_t
    -DDTF_HEADER_ONLY
    -UNDEBUG
)

add_library(
    ${PROJECT_NAME}

    common.hpp
)

target_link_libraries(
    ${PROJECT_NAME}
)



