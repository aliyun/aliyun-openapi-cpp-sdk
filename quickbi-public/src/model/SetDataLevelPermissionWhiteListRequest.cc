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

#include <alibabacloud/quickbi-public/model/SetDataLevelPermissionWhiteListRequest.h>

using AlibabaCloud::Quickbi_public::Model::SetDataLevelPermissionWhiteListRequest;

SetDataLevelPermissionWhiteListRequest::SetDataLevelPermissionWhiteListRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "SetDataLevelPermissionWhiteList") {
  setMethod(HttpRequest::Method::Post);
}

SetDataLevelPermissionWhiteListRequest::~SetDataLevelPermissionWhiteListRequest() {}

std::string SetDataLevelPermissionWhiteListRequest::getAccessPoint() const {
  return accessPoint_;
}

void SetDataLevelPermissionWhiteListRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string SetDataLevelPermissionWhiteListRequest::getSignType() const {
  return signType_;
}

void SetDataLevelPermissionWhiteListRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string SetDataLevelPermissionWhiteListRequest::getWhiteListModel() const {
  return whiteListModel_;
}

void SetDataLevelPermissionWhiteListRequest::setWhiteListModel(const std::string &whiteListModel) {
  whiteListModel_ = whiteListModel;
  setParameter(std::string("WhiteListModel"), whiteListModel);
}

