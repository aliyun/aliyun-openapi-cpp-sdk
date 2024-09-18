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

#include <alibabacloud/quickbi-public/model/AuthorizeMenuRequest.h>

using AlibabaCloud::Quickbi_public::Model::AuthorizeMenuRequest;

AuthorizeMenuRequest::AuthorizeMenuRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AuthorizeMenu") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeMenuRequest::~AuthorizeMenuRequest() {}

std::string AuthorizeMenuRequest::getDataPortalId() const {
  return dataPortalId_;
}

void AuthorizeMenuRequest::setDataPortalId(const std::string &dataPortalId) {
  dataPortalId_ = dataPortalId;
  setParameter(std::string("DataPortalId"), dataPortalId);
}

int AuthorizeMenuRequest::getAuthPointsValue() const {
  return authPointsValue_;
}

void AuthorizeMenuRequest::setAuthPointsValue(int authPointsValue) {
  authPointsValue_ = authPointsValue;
  setParameter(std::string("AuthPointsValue"), std::to_string(authPointsValue));
}

std::string AuthorizeMenuRequest::getAccessPoint() const {
  return accessPoint_;
}

void AuthorizeMenuRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string AuthorizeMenuRequest::getMenuIds() const {
  return menuIds_;
}

void AuthorizeMenuRequest::setMenuIds(const std::string &menuIds) {
  menuIds_ = menuIds;
  setParameter(std::string("MenuIds"), menuIds);
}

std::string AuthorizeMenuRequest::getSignType() const {
  return signType_;
}

void AuthorizeMenuRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string AuthorizeMenuRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void AuthorizeMenuRequest::setUserGroupIds(const std::string &userGroupIds) {
  userGroupIds_ = userGroupIds;
  setParameter(std::string("UserGroupIds"), userGroupIds);
}

std::string AuthorizeMenuRequest::getUserIds() const {
  return userIds_;
}

void AuthorizeMenuRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setParameter(std::string("UserIds"), userIds);
}

