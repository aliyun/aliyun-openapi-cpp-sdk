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

#include <alibabacloud/dcdn/model/SetDcdnUserConfigRequest.h>

using AlibabaCloud::Dcdn::Model::SetDcdnUserConfigRequest;

SetDcdnUserConfigRequest::SetDcdnUserConfigRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "SetDcdnUserConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetDcdnUserConfigRequest::~SetDcdnUserConfigRequest() {}

std::string SetDcdnUserConfigRequest::getConfigs() const {
  return configs_;
}

void SetDcdnUserConfigRequest::setConfigs(const std::string &configs) {
  configs_ = configs;
  setParameter(std::string("Configs"), configs);
}

std::string SetDcdnUserConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void SetDcdnUserConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetDcdnUserConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetDcdnUserConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SetDcdnUserConfigRequest::getOwnerId() const {
  return ownerId_;
}

void SetDcdnUserConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int SetDcdnUserConfigRequest::getFunctionId() const {
  return functionId_;
}

void SetDcdnUserConfigRequest::setFunctionId(int functionId) {
  functionId_ = functionId;
  setParameter(std::string("FunctionId"), std::to_string(functionId));
}

