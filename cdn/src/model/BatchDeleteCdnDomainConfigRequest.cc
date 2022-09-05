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

#include <alibabacloud/cdn/model/BatchDeleteCdnDomainConfigRequest.h>

using AlibabaCloud::Cdn::Model::BatchDeleteCdnDomainConfigRequest;

BatchDeleteCdnDomainConfigRequest::BatchDeleteCdnDomainConfigRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "BatchDeleteCdnDomainConfig") {
  setMethod(HttpRequest::Method::Post);
}

BatchDeleteCdnDomainConfigRequest::~BatchDeleteCdnDomainConfigRequest() {}

std::string BatchDeleteCdnDomainConfigRequest::getFunctionNames() const {
  return functionNames_;
}

void BatchDeleteCdnDomainConfigRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string BatchDeleteCdnDomainConfigRequest::getDomainNames() const {
  return domainNames_;
}

void BatchDeleteCdnDomainConfigRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchDeleteCdnDomainConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchDeleteCdnDomainConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BatchDeleteCdnDomainConfigRequest::getOwnerId() const {
  return ownerId_;
}

void BatchDeleteCdnDomainConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BatchDeleteCdnDomainConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchDeleteCdnDomainConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

