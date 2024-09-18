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

#include <alibabacloud/quickbi-public/model/BatchAddFeishuUsersRequest.h>

using AlibabaCloud::Quickbi_public::Model::BatchAddFeishuUsersRequest;

BatchAddFeishuUsersRequest::BatchAddFeishuUsersRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "BatchAddFeishuUsers") {
  setMethod(HttpRequest::Method::Post);
}

BatchAddFeishuUsersRequest::~BatchAddFeishuUsersRequest() {}

std::string BatchAddFeishuUsersRequest::getAccessPoint() const {
  return accessPoint_;
}

void BatchAddFeishuUsersRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

bool BatchAddFeishuUsersRequest::getIsAuthAdmin() const {
  return isAuthAdmin_;
}

void BatchAddFeishuUsersRequest::setIsAuthAdmin(bool isAuthAdmin) {
  isAuthAdmin_ = isAuthAdmin;
  setParameter(std::string("IsAuthAdmin"), isAuthAdmin ? "true" : "false");
}

bool BatchAddFeishuUsersRequest::getIsAdmin() const {
  return isAdmin_;
}

void BatchAddFeishuUsersRequest::setIsAdmin(bool isAdmin) {
  isAdmin_ = isAdmin;
  setParameter(std::string("IsAdmin"), isAdmin ? "true" : "false");
}

int BatchAddFeishuUsersRequest::getUserType() const {
  return userType_;
}

void BatchAddFeishuUsersRequest::setUserType(int userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), std::to_string(userType));
}

std::string BatchAddFeishuUsersRequest::getSignType() const {
  return signType_;
}

void BatchAddFeishuUsersRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string BatchAddFeishuUsersRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void BatchAddFeishuUsersRequest::setUserGroupIds(const std::string &userGroupIds) {
  userGroupIds_ = userGroupIds;
  setParameter(std::string("UserGroupIds"), userGroupIds);
}

std::string BatchAddFeishuUsersRequest::getFeishuUsers() const {
  return feishuUsers_;
}

void BatchAddFeishuUsersRequest::setFeishuUsers(const std::string &feishuUsers) {
  feishuUsers_ = feishuUsers;
  setParameter(std::string("FeishuUsers"), feishuUsers);
}

