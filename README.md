# Examples for https://github.com/bazelbuild/proposals/pull/269

1. Build and use Bazel from https://github.com/fmeum/bazel/tree/bzlmod-runfiles for the following steps.
2. In the root of this repository, run `bazel run //:java_tool` and `bazel run //:some_tool` to see examples of repository mapping manifests for Java and C++ targets.
3. In the `other_module` subdirectory, run `bazel run @my_module//:java_tool` and `bazel run @my_module//:some_tool` to see the same examples from the context of a different root module importing `my_module.`
