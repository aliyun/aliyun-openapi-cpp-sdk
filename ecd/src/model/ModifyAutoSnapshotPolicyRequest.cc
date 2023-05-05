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

#include <alibabacloud/ecd/model/ModifyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecd::Model::ModifyAutoSnapshotPolicyRequest;

ModifyAutoSnapshotPolicyRequest::ModifyAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAutoSnapshotPolicyRequest::~ModifyAutoSnapshotPolicyRequest() {}

std::string ModifyAutoSnapshotPolicyRequest::getCronExpression() const {
  return cronExpression_;
}

void ModifyAutoSnapshotPolicyRequest::setCronExpression(const std::string &cronExpression) {
  cronExpression_ = cronExpression;
  setParameter(std::string("CronExpression"), cronExpression);
}

std::string ModifyAutoSnapshotPolicyRequest::getPolicyId() const {
  return policyId_;
}

void ModifyAutoSnapshotPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string ModifyAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void ModifyAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyAutoSnapshotPolicyRequest::getPolicyName() const {
  return policyName_;
}

void ModifyAutoSnapshotPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

int ModifyAutoSnapshotPolicyRequest::getRetentionDays() const {
  return retentionDays_;
}

void ModifyAutoSnapshotPolicyRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

