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

#include <alibabacloud/ecd/model/ApplyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecd::Model::ApplyAutoSnapshotPolicyRequest;

ApplyAutoSnapshotPolicyRequest::ApplyAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ApplyAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ApplyAutoSnapshotPolicyRequest::~ApplyAutoSnapshotPolicyRequest() {}

std::string ApplyAutoSnapshotPolicyRequest::getPolicyId() const {
  return policyId_;
}

void ApplyAutoSnapshotPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string ApplyAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void ApplyAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ApplyAutoSnapshotPolicyRequest::getDesktopId() const {
  return desktopId_;
}

void ApplyAutoSnapshotPolicyRequest::setDesktopId(const std::vector<std::string> &desktopId) {
  desktopId_ = desktopId;
}

