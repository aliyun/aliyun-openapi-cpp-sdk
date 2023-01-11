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

#include <alibabacloud/ons/model/OnsGroupCreateRequest.h>

using AlibabaCloud::Ons::Model::OnsGroupCreateRequest;

OnsGroupCreateRequest::OnsGroupCreateRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsGroupCreate") {
  setMethod(HttpRequest::Method::Post);
}

OnsGroupCreateRequest::~OnsGroupCreateRequest() {}

std::string OnsGroupCreateRequest::getGroupId() const {
  return groupId_;
}

void OnsGroupCreateRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string OnsGroupCreateRequest::getRemark() const {
  return remark_;
}

void OnsGroupCreateRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string OnsGroupCreateRequest::getUserId() const {
  return userId_;
}

void OnsGroupCreateRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string OnsGroupCreateRequest::getInstanceId() const {
  return instanceId_;
}

void OnsGroupCreateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OnsGroupCreateRequest::getGroupType() const {
  return groupType_;
}

void OnsGroupCreateRequest::setGroupType(const std::string &groupType) {
  groupType_ = groupType;
  setParameter(std::string("GroupType"), groupType);
}

