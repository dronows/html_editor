# CMakeList.txt: проект CMake для html_editor; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("html_editor")


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable (html_editor "html_editor.cpp" "html_editor.h" "main.cpp" "html_editor.ui")


set(CMAKE_PREFIX_PATH "F:\\Qt\\5.12.12\\msvc2017_64\\lib\\cmake")
find_package( Qt5 COMPONENTS
    Core
    Gui
    Widgets
    WebengineCore
    WebEngineWidgets
REQUIRED)

target_link_libraries(html_editor
Qt5::Core
Qt5::Gui
Qt5::Widgets
Qt5::WebEngineCore
Qt5::WebEngineWidgets)


