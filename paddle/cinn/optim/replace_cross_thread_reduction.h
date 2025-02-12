// Copyright (c) 2021 CINN Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * This file implements the strategy to remove the unnecessary nested block.
 */
#pragma once
#include <vector>

#include "paddle/cinn/common/common.h"
#include "paddle/cinn/ir/ir.h"

namespace cinn {
namespace optim {

/**
 * Replace cross thread reduction to external call.
 */
void ReplaceCrossThreadReduction(ir::LoweredFunc fn);

}  // namespace optim
}  // namespace cinn
