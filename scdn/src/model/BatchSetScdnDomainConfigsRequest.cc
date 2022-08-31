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

#include <alibabacloud/scdn/model/BatchSetScdnDomainConfigsRequest.h>

using AlibabaCloud::Scdn::Model::BatchSetScdnDomainConfigsRequest;

BatchSetScdnDomainConfigsRequest::BatchSetScdnDomainConfigsRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "BatchSetScdnDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

BatchSetScdnDomainConfigsRequest::~BatchSetScdnDomainConfigsRequest() {}

std::string BatchSetScdnDomainConfigsRequest::getFunctions() const {
  return functions_;
}

void BatchSetScdnDomainConfigsRequest::setFunctions(const std::string &functions) {
  functions_ = functions;
  setParameter(std::string("Functions"), functions);
}

std::string BatchSetScdnDomainConfigsRequest::getDomainNames() const {
  return domainNames_;
}

void BatchSetScdnDomainConfigsRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchSetScdnDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchSetScdnDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchSetScdnDomainConfigsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchSetScdnDomainConfigsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BatchSetScdnDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void BatchSetScdnDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

