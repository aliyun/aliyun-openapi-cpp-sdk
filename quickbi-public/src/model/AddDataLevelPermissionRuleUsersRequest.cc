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

#include <alibabacloud/quickbi-public/model/AddDataLevelPermissionRuleUsersRequest.h>

using AlibabaCloud::Quickbi_public::Model::AddDataLevelPermissionRuleUsersRequest;

AddDataLevelPermissionRuleUsersRequest::AddDataLevelPermissionRuleUsersRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "AddDataLevelPermissionRuleUsers") {
  setMethod(HttpRequest::Method::Post);
}

AddDataLevelPermissionRuleUsersRequest::~AddDataLevelPermissionRuleUsersRequest() {}

std::string AddDataLevelPermissionRuleUsersRequest::getClientToken() const {
  return clientToken_;
}

void AddDataLevelPermissionRuleUsersRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddDataLevelPermissionRuleUsersRequest::getAccessPoint() const {
  return accessPoint_;
}

void AddDataLevelPermissionRuleUsersRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string AddDataLevelPermissionRuleUsersRequest::getAddUserModel() const {
  return addUserModel_;
}

void AddDataLevelPermissionRuleUsersRequest::setAddUserModel(const std::string &addUserModel) {
  addUserModel_ = addUserModel;
  setParameter(std::string("AddUserModel"), addUserModel);
}

std::string AddDataLevelPermissionRuleUsersRequest::getSignType() const {
  return signType_;
}

void AddDataLevelPermissionRuleUsersRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

