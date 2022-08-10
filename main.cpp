#include <fstream>
#include <iostream>
#include <memory>
#include <string>

#include "tools/cpp/runfiles/runfiles.h"

using bazel::tools::cpp::runfiles::Runfiles;

int main(int argc, char **argv) {
  std::cout << "BAZEL_CURRENT_REPOSITORY_NAME: '" << BAZEL_CURRENT_REPOSITORY_NAME << "'" << std::endl;
  std::unique_ptr<Runfiles> runfiles(Runfiles::Create(argv[0], nullptr));
  std::string repo_mapping_path = runfiles->Rlocation("_repo_mapping");
  std::cout << "_repo_mapping --> " << repo_mapping_path << ":" << std::endl;
  std::ifstream repo_mapping_file(repo_mapping_path);
  std::cout << repo_mapping_file.rdbuf();
}
