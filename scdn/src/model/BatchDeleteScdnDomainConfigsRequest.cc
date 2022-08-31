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

#include <alibabacloud/scdn/model/BatchDeleteScdnDomainConfigsRequest.h>

using AlibabaCloud::Scdn::Model::BatchDeleteScdnDomainConfigsRequest;

BatchDeleteScdnDomainConfigsRequest::BatchDeleteScdnDomainConfigsRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "BatchDeleteScdnDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteScdnDomainConfigsRequest::~BatchDeleteScdnDomainConfigsRequest() {}

std::string BatchDeleteScdnDomainConfigsRequest::getFunctionNames() const {
  return functionNames_;
}

void BatchDeleteScdnDomainConfigsRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string BatchDeleteScdnDomainConfigsRequest::getDomainNames() const {
  return domainNames_;
}

void BatchDeleteScdnDomainConfigsRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchDeleteScdnDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchDeleteScdnDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchDeleteScdnDomainConfigsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchDeleteScdnDomainConfigsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BatchDeleteScdnDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void BatchDeleteScdnDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

