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

#include <alibabacloud/cdn/model/SetConfigOfVersionRequest.h>

using AlibabaCloud::Cdn::Model::SetConfigOfVersionRequest;

SetConfigOfVersionRequest::SetConfigOfVersionRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "SetConfigOfVersion") {
  setMethod(HttpRequest::Method::Post);
}

SetConfigOfVersionRequest::~SetConfigOfVersionRequest() {}

std::string SetConfigOfVersionRequest::getVersionId() const {
  return versionId_;
}

void SetConfigOfVersionRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string SetConfigOfVersionRequest::getSecurityToken() const {
  return securityToken_;
}

void SetConfigOfVersionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SetConfigOfVersionRequest::getFunctionName() const {
  return functionName_;
}

void SetConfigOfVersionRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("FunctionName"), functionName);
}

std::string SetConfigOfVersionRequest::getFunctionArgs() const {
  return functionArgs_;
}

void SetConfigOfVersionRequest::setFunctionArgs(const std::string &functionArgs) {
  functionArgs_ = functionArgs;
  setParameter(std::string("FunctionArgs"), functionArgs);
}

std::string SetConfigOfVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetConfigOfVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SetConfigOfVersionRequest::getOwnerId() const {
  return ownerId_;
}

void SetConfigOfVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long SetConfigOfVersionRequest::getFunctionId() const {
  return functionId_;
}

void SetConfigOfVersionRequest::setFunctionId(long functionId) {
  functionId_ = functionId;
  setParameter(std::string("FunctionId"), std::to_string(functionId));
}

std::string SetConfigOfVersionRequest::getConfigId() const {
  return configId_;
}

void SetConfigOfVersionRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

