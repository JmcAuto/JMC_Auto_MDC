load("//tools:cpplint.bzl", "cpplint")


cc_library(
    name = "canbus_lib",
    srcs = ["canbus.cc"],
    hdrs = ["canbus.h"],
    deps = [
        "//modules/canbus/common:canbus_common",
        "//modules/canbus/vehicle:vehicle_factory",
        "//modules/common",
        "//modules/common:jmc_auto_app",
        "//modules/common/adapters:adapter_manager",
        "//modules/common/monitor_log",
        "//modules/drivers/canbus/can_client:can_client_factory",
        "//modules/drivers/canbus/can_comm:can_receiver",
        "//modules/drivers/canbus/can_comm:can_sender",
        "//modules/remotecontrol/proto:remotecontrol_proto",
    ],
)

#cc_test(
#    name = "canbus_test",
#    size = "small",
#    srcs = ["canbus_test.cc"],
#    deps = [
#        ":canbus_lib",
#        "@gtest//:main",
#    ],
#)

cc_binary(
    name = "canbus",
    srcs = ["main.cc"],
    deps = [
        ":canbus_lib",
        "//external:gflags",
        "//modules/canbus/common:canbus_common",
        "//modules/common:log",
        "//modules/common/monitor_log",
        "//modules/drivers/canbus/can_client",
        "//modules/drivers/canbus/common:canbus_common",
        "@ros//:ros_common",
    ],
)


