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

#include <alibabacloud/ecd/model/ClonePolicyGroupRequest.h>

using AlibabaCloud::Ecd::Model::ClonePolicyGroupRequest;

ClonePolicyGroupRequest::ClonePolicyGroupRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ClonePolicyGroup") {
  setMethod(HttpRequest::Method::Post);
}

ClonePolicyGroupRequest::~ClonePolicyGroupRequest() {}

std::string ClonePolicyGroupRequest::getRegionId() const {
  return regionId_;
}

void ClonePolicyGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ClonePolicyGroupRequest::getName() const {
  return name_;
}

void ClonePolicyGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ClonePolicyGroupRequest::getPolicyGroupId() const {
  return policyGroupId_;
}

void ClonePolicyGroupRequest::setPolicyGroupId(const std::string &policyGroupId) {
  policyGroupId_ = policyGroupId;
  setParameter(std::string("PolicyGroupId"), policyGroupId);
}

