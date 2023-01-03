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

#include <alibabacloud/dbfs/model/ApplyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::DBFS::Model::ApplyAutoSnapshotPolicyRequest;

ApplyAutoSnapshotPolicyRequest::ApplyAutoSnapshotPolicyRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ApplyAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ApplyAutoSnapshotPolicyRequest::~ApplyAutoSnapshotPolicyRequest() {}

std::vector<ApplyAutoSnapshotPolicyRequest::std::string> ApplyAutoSnapshotPolicyRequest::getDbfsIds() const {
  return dbfsIds_;
}

void ApplyAutoSnapshotPolicyRequest::setDbfsIds(const std::vector<ApplyAutoSnapshotPolicyRequest::std::string> &dbfsIds) {
  dbfsIds_ = dbfsIds;
  for(int dep1 = 0; dep1 != dbfsIds.size(); dep1++) {
    setParameter(std::string("DbfsIds") + "." + std::to_string(dep1 + 1), dbfsIds[dep1]);
  }
}

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

