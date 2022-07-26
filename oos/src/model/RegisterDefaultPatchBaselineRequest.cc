/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/oos/model/RegisterDefaultPatchBaselineRequest.h>

using AlibabaCloud::Oos::Model::RegisterDefaultPatchBaselineRequest;

RegisterDefaultPatchBaselineRequest::RegisterDefaultPatchBaselineRequest()
    : RpcServiceRequest("oos", "2019-06-01", "RegisterDefaultPatchBaseline") {
  setMethod(HttpRequest::Method::Post);
}

RegisterDefaultPatchBaselineRequest::~RegisterDefaultPatchBaselineRequest() {}

std::string RegisterDefaultPatchBaselineRequest::getRegionId() const {
  return regionId_;
}

void RegisterDefaultPatchBaselineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RegisterDefaultPatchBaselineRequest::getName() const {
  return name_;
}

void RegisterDefaultPatchBaselineRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

