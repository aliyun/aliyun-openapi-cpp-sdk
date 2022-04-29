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

#include <alibabacloud/nas/model/CreateAutoSnapshotPolicyRequest.h>

using AlibabaCloud::NAS::Model::CreateAutoSnapshotPolicyRequest;

CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest()
    : RpcServiceRequest("nas", "2017-06-26", "CreateAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateAutoSnapshotPolicyRequest::~CreateAutoSnapshotPolicyRequest() {}

std::string CreateAutoSnapshotPolicyRequest::getTimePoints() const {
  return timePoints_;
}

void CreateAutoSnapshotPolicyRequest::setTimePoints(const std::string &timePoints) {
  timePoints_ = timePoints;
  setParameter(std::string("TimePoints"), timePoints);
}

std::string CreateAutoSnapshotPolicyRequest::getRepeatWeekdays() const {
  return repeatWeekdays_;
}

void CreateAutoSnapshotPolicyRequest::setRepeatWeekdays(const std::string &repeatWeekdays) {
  repeatWeekdays_ = repeatWeekdays;
  setParameter(std::string("RepeatWeekdays"), repeatWeekdays);
}

std::string CreateAutoSnapshotPolicyRequest::getFileSystemType() const {
  return fileSystemType_;
}

void CreateAutoSnapshotPolicyRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

std::string CreateAutoSnapshotPolicyRequest::getAutoSnapshotPolicyName() const {
  return autoSnapshotPolicyName_;
}

void CreateAutoSnapshotPolicyRequest::setAutoSnapshotPolicyName(const std::string &autoSnapshotPolicyName) {
  autoSnapshotPolicyName_ = autoSnapshotPolicyName;
  setParameter(std::string("AutoSnapshotPolicyName"), autoSnapshotPolicyName);
}

int CreateAutoSnapshotPolicyRequest::getRetentionDays() const {
  return retentionDays_;
}

void CreateAutoSnapshotPolicyRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

