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

#include <alibabacloud/nas/model/ModifyAutoSnapshotPolicyRequest.h>

using AlibabaCloud::NAS::Model::ModifyAutoSnapshotPolicyRequest;

ModifyAutoSnapshotPolicyRequest::ModifyAutoSnapshotPolicyRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ModifyAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAutoSnapshotPolicyRequest::~ModifyAutoSnapshotPolicyRequest() {}

std::string ModifyAutoSnapshotPolicyRequest::getAutoSnapshotPolicyId() const {
  return autoSnapshotPolicyId_;
}

void ModifyAutoSnapshotPolicyRequest::setAutoSnapshotPolicyId(const std::string &autoSnapshotPolicyId) {
  autoSnapshotPolicyId_ = autoSnapshotPolicyId;
  setParameter(std::string("AutoSnapshotPolicyId"), autoSnapshotPolicyId);
}

std::string ModifyAutoSnapshotPolicyRequest::getTimePoints() const {
  return timePoints_;
}

void ModifyAutoSnapshotPolicyRequest::setTimePoints(const std::string &timePoints) {
  timePoints_ = timePoints;
  setParameter(std::string("TimePoints"), timePoints);
}

std::string ModifyAutoSnapshotPolicyRequest::getRepeatWeekdays() const {
  return repeatWeekdays_;
}

void ModifyAutoSnapshotPolicyRequest::setRepeatWeekdays(const std::string &repeatWeekdays) {
  repeatWeekdays_ = repeatWeekdays;
  setParameter(std::string("RepeatWeekdays"), repeatWeekdays);
}

std::string ModifyAutoSnapshotPolicyRequest::getAutoSnapshotPolicyName() const {
  return autoSnapshotPolicyName_;
}

void ModifyAutoSnapshotPolicyRequest::setAutoSnapshotPolicyName(const std::string &autoSnapshotPolicyName) {
  autoSnapshotPolicyName_ = autoSnapshotPolicyName;
  setParameter(std::string("AutoSnapshotPolicyName"), autoSnapshotPolicyName);
}

int ModifyAutoSnapshotPolicyRequest::getRetentionDays() const {
  return retentionDays_;
}

void ModifyAutoSnapshotPolicyRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

