include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_subdirectory(adapters)
add_subdirectory(configs)
add_subdirectory(filters)
add_subdirectory(kv_db)
add_subdirectory(math)
#add_subdirectory(monitor_log)
add_subdirectory(proto)
add_subdirectory(status)
add_subdirectory(time)
#add_subdirectory(transform_listener)
add_subdirectory(util)
add_subdirectory(vehicle_model)
add_subdirectory(vehicle_state)

add_library(common INTERFACE)
target_link_libraries(common INTERFACE
  ${COMMON_LIB}
  jmcauto_log
  macro
  macros)
add_library(macro INTERFACE)
add_library(macros INTERFACE)
add_library(jmcauto_log INTERFACE)
target_link_libraries(jmcauto_log INTERFACE
  ${COMMON_LIB}
  glog)
add_library(jmc_auto_app
  jmc_auto_app.cc
  jmc_auto_app.h)
target_link_libraries(jmc_auto_app
  ${COMMON_LIB}
jmcauto_log
  status
  string_util)