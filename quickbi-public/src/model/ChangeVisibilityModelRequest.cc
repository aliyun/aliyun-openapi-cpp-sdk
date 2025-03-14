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

#include <alibabacloud/quickbi-public/model/ChangeVisibilityModelRequest.h>

using AlibabaCloud::Quickbi_public::Model::ChangeVisibilityModelRequest;

ChangeVisibilityModelRequest::ChangeVisibilityModelRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ChangeVisibilityModel") {
  setMethod(HttpRequest::Method::Post);
}

ChangeVisibilityModelRequest::~ChangeVisibilityModelRequest() {}

std::string ChangeVisibilityModelRequest::getDataPortalId() const {
  return dataPortalId_;
}

void ChangeVisibilityModelRequest::setDataPortalId(const std::string &dataPortalId) {
  dataPortalId_ = dataPortalId;
  setParameter(std::string("DataPortalId"), dataPortalId);
}

std::string ChangeVisibilityModelRequest::getAccessPoint() const {
  return accessPoint_;
}

void ChangeVisibilityModelRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ChangeVisibilityModelRequest::getMenuIds() const {
  return menuIds_;
}

void ChangeVisibilityModelRequest::setMenuIds(const std::string &menuIds) {
  menuIds_ = menuIds;
  setParameter(std::string("MenuIds"), menuIds);
}

bool ChangeVisibilityModelRequest::getShowOnlyWithAccess() const {
  return showOnlyWithAccess_;
}

void ChangeVisibilityModelRequest::setShowOnlyWithAccess(bool showOnlyWithAccess) {
  showOnlyWithAccess_ = showOnlyWithAccess;
  setParameter(std::string("ShowOnlyWithAccess"), showOnlyWithAccess ? "true" : "false");
}

std::string ChangeVisibilityModelRequest::getSignType() const {
  return signType_;
}

void ChangeVisibilityModelRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

