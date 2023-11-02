load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "ship",
    srcs = ["src/ship.cpp"],
    hdrs = ["src/ship.hpp"],
    strip_include_prefix = "",
)

cc_test(
    name = "ship_test",
    srcs = ["test/ship_test.cpp"],
    deps = [
        ":ship",
        "@googletest//:gtest_main",
    ],
)
