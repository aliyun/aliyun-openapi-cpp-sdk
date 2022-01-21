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

#include <alibabacloud/cms/model/CreateMonitorGroupNotifyPolicyRequest.h>

using AlibabaCloud::Cms::Model::CreateMonitorGroupNotifyPolicyRequest;

CreateMonitorGroupNotifyPolicyRequest::CreateMonitorGroupNotifyPolicyRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateMonitorGroupNotifyPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateMonitorGroupNotifyPolicyRequest::~CreateMonitorGroupNotifyPolicyRequest() {}

std::string CreateMonitorGroupNotifyPolicyRequest::getPolicyType() const {
  return policyType_;
}

void CreateMonitorGroupNotifyPolicyRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string CreateMonitorGroupNotifyPolicyRequest::getGroupId() const {
  return groupId_;
}

void CreateMonitorGroupNotifyPolicyRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long CreateMonitorGroupNotifyPolicyRequest::getEndTime() const {
  return endTime_;
}

void CreateMonitorGroupNotifyPolicyRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long CreateMonitorGroupNotifyPolicyRequest::getStartTime() const {
  return startTime_;
}

void CreateMonitorGroupNotifyPolicyRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

