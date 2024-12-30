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

#include <alibabacloud/quickbi-public/model/CancelAuthorizationMenuRequest.h>

using AlibabaCloud::Quickbi_public::Model::CancelAuthorizationMenuRequest;

CancelAuthorizationMenuRequest::CancelAuthorizationMenuRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CancelAuthorizationMenu") {
  setMethod(HttpRequest::Method::Post);
}

CancelAuthorizationMenuRequest::~CancelAuthorizationMenuRequest() {}

std::string CancelAuthorizationMenuRequest::getDataPortalId() const {
  return dataPortalId_;
}

void CancelAuthorizationMenuRequest::setDataPortalId(const std::string &dataPortalId) {
  dataPortalId_ = dataPortalId;
  setParameter(std::string("DataPortalId"), dataPortalId);
}

std::string CancelAuthorizationMenuRequest::getAccessPoint() const {
  return accessPoint_;
}

void CancelAuthorizationMenuRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string CancelAuthorizationMenuRequest::getMenuIds() const {
  return menuIds_;
}

void CancelAuthorizationMenuRequest::setMenuIds(const std::string &menuIds) {
  menuIds_ = menuIds;
  setParameter(std::string("MenuIds"), menuIds);
}

std::string CancelAuthorizationMenuRequest::getSignType() const {
  return signType_;
}

void CancelAuthorizationMenuRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string CancelAuthorizationMenuRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void CancelAuthorizationMenuRequest::setUserGroupIds(const std::string &userGroupIds) {
  userGroupIds_ = userGroupIds;
  setParameter(std::string("UserGroupIds"), userGroupIds);
}

std::string CancelAuthorizationMenuRequest::getUserIds() const {
  return userIds_;
}

void CancelAuthorizationMenuRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setParameter(std::string("UserIds"), userIds);
}

