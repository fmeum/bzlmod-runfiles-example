java_library(
  name = "java_tool_lib",
  srcs = ["Main.java"],
  data = [
    "data.txt",
    "@my_protobuf//:protoc",
  ],
  deps = ["@bazel_tools//tools/java/runfiles"],
)

# The examples are split into java_binary and java_library since java_binary
# hasn't been starlarkified yet and thus doesn't generate the RunfilesHelper.
java_binary(
  name = "java_tool",
  main_class = "Main",
  runtime_deps = [":java_tool_lib"],
)

cc_binary(
   name = "some_tool",
   srcs = ["main.cpp"],
   data = [
      "data.txt",
       "@my_protobuf//:protoc",
   ],
   deps = ["@bazel_tools//tools/cpp/runfiles"],
)
