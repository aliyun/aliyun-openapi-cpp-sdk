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

#include <alibabacloud/quickbi-public/model/UpdateUserGroupRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateUserGroupRequest;

UpdateUserGroupRequest::UpdateUserGroupRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateUserGroupRequest::~UpdateUserGroupRequest() {}

std::string UpdateUserGroupRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateUserGroupRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateUserGroupRequest::getUserGroupName() const {
  return userGroupName_;
}

void UpdateUserGroupRequest::setUserGroupName(const std::string &userGroupName) {
  userGroupName_ = userGroupName;
  setParameter(std::string("UserGroupName"), userGroupName);
}

std::string UpdateUserGroupRequest::getUserGroupId() const {
  return userGroupId_;
}

void UpdateUserGroupRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

std::string UpdateUserGroupRequest::getSignType() const {
  return signType_;
}

void UpdateUserGroupRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string UpdateUserGroupRequest::getUserGroupDescription() const {
  return userGroupDescription_;
}

void UpdateUserGroupRequest::setUserGroupDescription(const std::string &userGroupDescription) {
  userGroupDescription_ = userGroupDescription;
  setParameter(std::string("UserGroupDescription"), userGroupDescription);
}

