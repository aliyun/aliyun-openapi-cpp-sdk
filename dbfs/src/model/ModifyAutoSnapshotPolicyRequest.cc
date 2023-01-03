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

#include <alibabacloud/dbfs/model/ModifyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::DBFS::Model::ModifyAutoSnapshotPolicyRequest;

ModifyAutoSnapshotPolicyRequest::ModifyAutoSnapshotPolicyRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "ModifyAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAutoSnapshotPolicyRequest::~ModifyAutoSnapshotPolicyRequest() {}

std::vector<ModifyAutoSnapshotPolicyRequest::std::string> ModifyAutoSnapshotPolicyRequest::getTimePoints() const {
  return timePoints_;
}

void ModifyAutoSnapshotPolicyRequest::setTimePoints(const std::vector<ModifyAutoSnapshotPolicyRequest::std::string> &timePoints) {
  timePoints_ = timePoints;
  for(int dep1 = 0; dep1 != timePoints.size(); dep1++) {
    setParameter(std::string("TimePoints") + "." + std::to_string(dep1 + 1), timePoints[dep1]);
  }
}

std::vector<ModifyAutoSnapshotPolicyRequest::std::string> ModifyAutoSnapshotPolicyRequest::getRepeatWeekdays() const {
  return repeatWeekdays_;
}

void ModifyAutoSnapshotPolicyRequest::setRepeatWeekdays(const std::vector<ModifyAutoSnapshotPolicyRequest::std::string> &repeatWeekdays) {
  repeatWeekdays_ = repeatWeekdays;
  for(int dep1 = 0; dep1 != repeatWeekdays.size(); dep1++) {
    setParameter(std::string("RepeatWeekdays") + "." + std::to_string(dep1 + 1), repeatWeekdays[dep1]);
  }
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

