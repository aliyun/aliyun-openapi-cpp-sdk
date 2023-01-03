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

#include <alibabacloud/dbfs/model/GetAutoSnapshotPolicyRequest.h>

using AlibabaCloud::DBFS::Model::GetAutoSnapshotPolicyRequest;

GetAutoSnapshotPolicyRequest::GetAutoSnapshotPolicyRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "GetAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

GetAutoSnapshotPolicyRequest::~GetAutoSnapshotPolicyRequest() {}

std::string GetAutoSnapshotPolicyRequest::getPolicyId() const {
  return policyId_;
}

void GetAutoSnapshotPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string GetAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void GetAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

