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

#include <alibabacloud/dcdn/model/BatchDeleteDcdnDomainConfigsRequest.h>

using AlibabaCloud::Dcdn::Model::BatchDeleteDcdnDomainConfigsRequest;

BatchDeleteDcdnDomainConfigsRequest::BatchDeleteDcdnDomainConfigsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchDeleteDcdnDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteDcdnDomainConfigsRequest::~BatchDeleteDcdnDomainConfigsRequest() {}

std::string BatchDeleteDcdnDomainConfigsRequest::getFunctionNames() const {
  return functionNames_;
}

void BatchDeleteDcdnDomainConfigsRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string BatchDeleteDcdnDomainConfigsRequest::getDomainNames() const {
  return domainNames_;
}

void BatchDeleteDcdnDomainConfigsRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchDeleteDcdnDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchDeleteDcdnDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchDeleteDcdnDomainConfigsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchDeleteDcdnDomainConfigsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BatchDeleteDcdnDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void BatchDeleteDcdnDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

