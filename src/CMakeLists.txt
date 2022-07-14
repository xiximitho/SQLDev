set(CMAKE_AUTORCC ON)

set (SOURCE_FILES
    application.qrc
    window/mainwindow.h
    window/mainwindow.cpp
    main.cpp
)

add_executable(SQLDev ${SOURCE_FILES})

target_link_libraries(SQLDev PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(SQLDev PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(SQLDev)
endif()

