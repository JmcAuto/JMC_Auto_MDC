include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(util
  file.cc
  string_tokenizer.cc
  util.cc
  blocking_queue.h
  file.h
  string_tokenizer.h
  util.h
  )
target_link_libraries(util
  ${COMMON_LIB}
  string_util
  math
  pnc_point_proto
  time
  boost_filesystem
  boost_system
  )
add_library(disjoint_set INTERFACE)
add_library(lru_cache INTERFACE)
add_library(threadpool INTERFACE)
add_library(ctpl_stl INTERFACE)
add_library(color INTERFACE)
add_library(string_util
  string_util.cc
  string_util.h)
target_link_libraries(string_util
  ${COMMON_LIB}
  protobuf)
add_library(map_util INTERFACE)
target_link_libraries(map_util INTERFACE
  ${COMMON_LIB}
  protobuf)
add_library(factory INTERFACE)
target_link_libraries(factory INTERFACE
  ${COMMON_LIB}
jmcauto_log)
add_library(points_downsampler INTERFACE)
target_link_libraries(points_downsampler INTERFACE
  ${COMMON_LIB}
jmcauto_log
  geometry)
add_library(json_util
  json_util.cc
  json_util.h)
target_link_libraries(json_util
  ${COMMON_LIB}
jmcauto_log
  third_party/json
  protobuf)
add_library(http_client
  http_client.cc
  http_client.h)
target_link_libraries(http_client
  ${COMMON_LIB}
jmcauto_log
  status
  string_util
  third_party/json
  curlpp)
add_library(future INTERFACE)
target_link_libraries(future INTERFACE
  ${COMMON_LIB}
  absl/memory
  absl/strings
  absl/types/optional
  absl/utility)
add_library(message_util INTERFACE)
target_link_libraries(message_util INTERFACE
  ${COMMON_LIB}
  time
  absl/strings
  protobuf)
add_library(point_factory INTERFACE)
target_link_libraries(point_factory INTERFACE
  ${COMMON_LIB}
  geometry
  pnc_point_proto)
add_library(pb_convertor
  PbConvertor.cpp
  PbConvertor.h)
target_link_libraries(pb_convertor
  protobuf
)



