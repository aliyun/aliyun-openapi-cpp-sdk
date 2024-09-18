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

#include <alibabacloud/quickbi-public/model/CreateUserGroupRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateUserGroupRequest;

CreateUserGroupRequest::CreateUserGroupRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CreateUserGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateUserGroupRequest::~CreateUserGroupRequest() {}

std::string CreateUserGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateUserGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateUserGroupRequest::getAccessPoint() const {
  return accessPoint_;
}

void CreateUserGroupRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string CreateUserGroupRequest::getUserGroupName() const {
  return userGroupName_;
}

void CreateUserGroupRequest::setUserGroupName(const std::string &userGroupName) {
  userGroupName_ = userGroupName;
  setParameter(std::string("UserGroupName"), userGroupName);
}

std::string CreateUserGroupRequest::getParentUserGroupId() const {
  return parentUserGroupId_;
}

void CreateUserGroupRequest::setParentUserGroupId(const std::string &parentUserGroupId) {
  parentUserGroupId_ = parentUserGroupId;
  setParameter(std::string("ParentUserGroupId"), parentUserGroupId);
}

std::string CreateUserGroupRequest::getUserGroupId() const {
  return userGroupId_;
}

void CreateUserGroupRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

std::string CreateUserGroupRequest::getSignType() const {
  return signType_;
}

void CreateUserGroupRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string CreateUserGroupRequest::getUserGroupDescription() const {
  return userGroupDescription_;
}

void CreateUserGroupRequest::setUserGroupDescription(const std::string &userGroupDescription) {
  userGroupDescription_ = userGroupDescription;
  setParameter(std::string("UserGroupDescription"), userGroupDescription);
}

