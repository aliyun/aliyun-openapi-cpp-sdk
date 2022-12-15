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

#include <alibabacloud/dbfs/model/CreateAutoSnapshotPolicyRequest.h>

using AlibabaCloud::DBFS::Model::CreateAutoSnapshotPolicyRequest;

CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "CreateAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateAutoSnapshotPolicyRequest::~CreateAutoSnapshotPolicyRequest() {}

std::vector<CreateAutoSnapshotPolicyRequest::std::string> CreateAutoSnapshotPolicyRequest::getTimePoints() const {
  return timePoints_;
}

void CreateAutoSnapshotPolicyRequest::setTimePoints(const std::vector<CreateAutoSnapshotPolicyRequest::std::string> &timePoints) {
  timePoints_ = timePoints;
  for(int dep1 = 0; dep1 != timePoints.size(); dep1++) {
    setParameter(std::string("TimePoints") + "." + std::to_string(dep1 + 1), timePoints[dep1]);
  }
}

std::vector<CreateAutoSnapshotPolicyRequest::std::string> CreateAutoSnapshotPolicyRequest::getRepeatWeekdays() const {
  return repeatWeekdays_;
}

void CreateAutoSnapshotPolicyRequest::setRepeatWeekdays(const std::vector<CreateAutoSnapshotPolicyRequest::std::string> &repeatWeekdays) {
  repeatWeekdays_ = repeatWeekdays;
  for(int dep1 = 0; dep1 != repeatWeekdays.size(); dep1++) {
    setParameter(std::string("RepeatWeekdays") + "." + std::to_string(dep1 + 1), repeatWeekdays[dep1]);
  }
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

