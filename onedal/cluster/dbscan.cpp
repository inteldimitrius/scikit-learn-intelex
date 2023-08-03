/*******************************************************************************
* Copyright 2023 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include "onedal/dal/algo/dbscan.hpp"

#include "onedal/common.hpp"
#include "onedal/version.hpp"

namespace py = pybind11;

namespace oneapi::dal::python {
    // TODO: implement params2desc
    struct params2desc {
        template <typename Float, typename Method, typename Task>
        auto operator()(const pybind11::dict& params) {
            using namespace dbscan;
            auto desc = descriptor<Float, Method, Task>();
            // TODO: fill desctiptor with params
            return desc;
        }
    };

    // init train method for pybind

    // init infer method for pybind

} // namespace oneapi::dal::python