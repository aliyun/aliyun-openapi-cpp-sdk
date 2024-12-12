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

#include <alibabacloud/dms-enterprise/model/UpdateStandardGroupRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateStandardGroupRequest;

UpdateStandardGroupRequest::UpdateStandardGroupRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateStandardGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateStandardGroupRequest::~UpdateStandardGroupRequest() {}

std::string UpdateStandardGroupRequest::getDescription() const {
  return description_;
}

void UpdateStandardGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateStandardGroupRequest::getTid() const {
  return tid_;
}

void UpdateStandardGroupRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long UpdateStandardGroupRequest::getGroupId() const {
  return groupId_;
}

void UpdateStandardGroupRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string UpdateStandardGroupRequest::getGroupName() const {
  return groupName_;
}

void UpdateStandardGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

