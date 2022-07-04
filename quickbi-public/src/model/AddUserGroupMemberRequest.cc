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

#include <alibabacloud/quickbi-public/model/AddUserGroupMemberRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddUserGroupMemberRequest;

AddUserGroupMemberRequest::AddUserGroupMemberRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddUserGroupMember") {
  setMethod(HttpRequest::Method::Post);
}

AddUserGroupMemberRequest::~AddUserGroupMemberRequest() {}

std::string AddUserGroupMemberRequest::getClientToken() const {
  return clientToken_;
}

void AddUserGroupMemberRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddUserGroupMemberRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddUserGroupMemberRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string AddUserGroupMemberRequest::getUserIdList() const {
  return userIdList_;
}

void AddUserGroupMemberRequest::setUserIdList(const std::string &userIdList) {
  userIdList_ = userIdList;
  setParameter(std::string("UserIdList"), userIdList);
}

std::string AddUserGroupMemberRequest::getUserGroupId() const {
  return userGroupId_;
}

void AddUserGroupMemberRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

std::string AddUserGroupMemberRequest::getSignType() const {
  return signType_;
}

void AddUserGroupMemberRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

