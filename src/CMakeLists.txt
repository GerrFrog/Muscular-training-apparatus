cmake_minimum_required( VERSION 3.5 )

project( Muscular LANGUAGES CXX )

set( CMAKE_INCLUDE_CURRENT_DIR ON )

set( CMAKE_AUTOUIC ON )
set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTORCC ON )

set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

set(
    SOURCES_FILES
    main.cpp
    main.hpp
)

set(
    UI_FILES

    ../gui/window-1.ui
    ../gui/window-2.ui
    ../gui/window-3.ui
    ../gui/window-4.ui
    ../gui/window-5.ui
    ../gui/window-6.ui
    ../gui/window-7.ui
    ../gui/window-8.ui
    ../gui/window-9.ui
    ../gui/window-10.ui
    ../gui/window-11.ui
    ../gui/window-12.ui
    ../gui/window-13.ui
)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_subdirectory( kernel )

include_directories(
    "./kernel"
)

# add_executable(
#     ${PROJECT_NAME}

#     ${SOURCES_FILES}
# )

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(
        ${PROJECT_NAME}

        MANUAL_FINALIZATION

        ${SOURCES_FILES}

        ../gui/res/res.qrc

        windows/common.hpp
        windows/mainwindow.hpp
        windows/mainwindow.cpp
        # Headers
        windows/page_2/inc/page_2.hpp
        windows/page_3/inc/page_3.hpp
        windows/page_4/inc/page_4.hpp
        windows/page_5/inc/page_5.hpp
        windows/page_6/inc/page_6.hpp
        windows/page_7/inc/page_7.hpp
        windows/page_8/inc/page_8.hpp
        windows/page_9/inc/page_9.hpp
        windows/page_10/inc/page_10.hpp
        windows/page_11/inc/page_11.hpp
        windows/page_12/inc/page_12.hpp
        windows/page_13/inc/page_13.hpp

        # Sources
        windows/page_2/src/page_2.cpp
        windows/page_3/src/page_3.cpp
        windows/page_4/src/page_4.cpp
        windows/page_5/src/page_5.cpp
        windows/page_6/src/page_6.cpp
        windows/page_7/src/page_7.cpp
        windows/page_8/src/page_8.cpp
        windows/page_9/src/page_9.cpp
        windows/page_10/src/page_10.cpp
        windows/page_11/src/page_11.cpp
        windows/page_12/src/page_12.cpp
        windows/page_13/src/page_13.cpp
    )
else()
    add_executable(
        ${PROJECT_NAME}

        ${SOURCES_FILES}

        ../gui/res/res.qrc

        windows/common.hpp
        windows/mainwindow.hpp
        windows/mainwindow.cpp
        # Headers
        # windows/page_1/inc/page_1.hpp
        windows/page_2/inc/page_2.hpp
        windows/page_3/inc/page_3.hpp
        windows/page_4/inc/page_4.hpp
        windows/page_5/inc/page_5.hpp
        windows/page_6/inc/page_6.hpp
        windows/page_7/inc/page_7.hpp
        windows/page_8/inc/page_8.hpp
        windows/page_9/inc/page_9.hpp
        windows/page_10/inc/page_10.hpp
        windows/page_11/inc/page_11.hpp
        windows/page_12/inc/page_12.hpp
        windows/page_13/inc/page_13.hpp

        # Sources
        # windows/page_1/src/page_1.cpp
        windows/page_2/src/page_2.cpp
        windows/page_3/src/page_3.cpp
        windows/page_4/src/page_4.cpp
        windows/page_5/src/page_5.cpp
        windows/page_6/src/page_6.cpp
        windows/page_7/src/page_7.cpp
        windows/page_8/src/page_8.cpp
        windows/page_9/src/page_9.cpp
        windows/page_10/src/page_10.cpp
        windows/page_11/src/page_11.cpp
        windows/page_12/src/page_12.cpp
        windows/page_13/src/page_13.cpp
    )
endif()

target_link_libraries(
    ${PROJECT_NAME}

    PRIVATE 
    Qt${QT_VERSION_MAJOR}::Widgets

    Muscular-kernel
)

# set_target_properties(
#     ${PROJECT_NAME}
#     PROPERTIES
#     MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
#     MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#     MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
#     MACOSX_BUNDLE TRUE
#     WIN32_EXECUTABLE TRUE
# )

install(
    TARGETS 
    ${PROJECT_NAME}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(
        ${PROJECT_NAME}
    )
endif()