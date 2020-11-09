##########################################################################
# 该文件内容为模板内容，用户可根据注释提示自定义修改
# 注意：COMMON前缀内容为默认添加，用户不可删除
##########################################################################

cmake_minimum_required(VERSION 3.5)
project(jmcauto)

#定义函数，把文件夹下所有子文件夹保存在变量中
macro(LISTSUBDIR result curdir)
file(GLOB_RECURSE children LIST_DIRECTORIES true  ${curdir}/*)
set(dirlist ${curdir})
foreach(child ${children})
    if(IS_DIRECTORY ${child})
        list(APPEND dirlist ${child})
    endif()
endforeach()
set(${result} ${dirlist})
endmacro()

#调用函数，把src，generated，和testcode下的子目录分别保存在变量中
LISTSUBDIR(SRCDIRS src)
LISTSUBDIR(GENERATEDDIRS generated)
LISTSUBDIR(TESTCODEDIRS testcode)

#包含src和generated目录下的头文件路径
INCLUDE_DIRECTORIES(${SRCDIRS})
INCLUDE_DIRECTORIES(${GENERATEDDIRS})

#把对应目录下的c和c++所有源文件分别保存在变量中
file(GLOB_RECURSE  C_SOURCE src/*.c generated/*.c)
file(GLOB_RECURSE  CXX_SOURCE src/*.cxx src/*.cpp src/*.cc generated/*.cxx generated/*.cpp generated/*.cc)
file(GLOB_RECURSE  TEST_C_SOURCE testcode/*.c)
file(GLOB_RECURSE  TEST_CXX_SOURCE testcode/*.cxx testcode/*.cpp testcode/*.cc)

#默认依赖，用户不可修改
include(${CMAKE_CURRENT_SOURCE_DIR}/.cmakes/ubuntu_common.cmake)

#用户可在此添加头文件路径
include_directories(${COMMON_INCLUDE})

#用户可在此添加库文件路径
link_directories(${COMMON_LINK_DIR})

#用户可在此添加宏
add_definitions(${COMMON_DEFINITIONS})

#用户可在此添加编译选项
add_compile_options(${COMMON_COMPILE})

#默认编译c和c++文件生成可执行文件
add_executable(jmcauto ${C_SOURCE} ${CXX_SOURCE})

#用户可在此添加链接库
target_link_libraries(jmcauto ${COMMON_LIB})

#用户可在此添加链接参数
set_target_properties(jmcauto PROPERTIES LINK_FLAGS ${COMMON_LINK_FLAG})