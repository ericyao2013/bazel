// Copyright 2017 The Bazel Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BAZEL_SRC_MAIN_CPP_OPTION_PROCESSOR_INTERNAL_H_
#define BAZEL_SRC_MAIN_CPP_OPTION_PROCESSOR_INTERNAL_H_

#include <algorithm>

#include "src/main/cpp/rc_file.h"
#include "src/main/cpp/util/exit_code.h"
#include "src/main/cpp/util/file.h"

namespace blaze {
namespace internal {

// Returns the deduped set of bazelrc paths (with respect to its canonical form)
// preserving the original order. The paths that cannot be resolved are
// omitted.
std::vector<std::string> DedupeBlazercPaths(
    const std::vector<std::string>& paths);

std::string FindRcAlongsideBinary(const std::string& cwd,
                                  const std::string& path_to_binary);

blaze_exit_code::ExitCode ParseErrorToExitCode(RcFile::ParseError parse_error);

}  // namespace internal
}  // namespace blaze

#endif  // BAZEL_SRC_MAIN_CPP_OPTION_PROCESSOR_INTERNAL_H_
