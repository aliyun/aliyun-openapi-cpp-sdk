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

#include <alibabacloud/ecd/model/CreateAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecd::Model::CreateAutoSnapshotPolicyRequest;

CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateAutoSnapshotPolicyRequest::~CreateAutoSnapshotPolicyRequest() {}

std::string CreateAutoSnapshotPolicyRequest::getCronExpression() const {
  return cronExpression_;
}

void CreateAutoSnapshotPolicyRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setParameter(std::string("CronExpression"), cronExpression);
}

std::string CreateAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateAutoSnapshotPolicyRequest::getPolicyName() const {
  return policyName_;
}

void CreateAutoSnapshotPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

int CreateAutoSnapshotPolicyRequest::getRetentionDays() const {
  return retentionDays_;
}

void CreateAutoSnapshotPolicyRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

