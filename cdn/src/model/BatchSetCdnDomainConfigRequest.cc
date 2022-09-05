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

#include <alibabacloud/cdn/model/BatchSetCdnDomainConfigRequest.h>

using AlibabaCloud::Cdn::Model::BatchSetCdnDomainConfigRequest;

BatchSetCdnDomainConfigRequest::BatchSetCdnDomainConfigRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "BatchSetCdnDomainConfig") {
  setMethod(HttpRequest::Method::Post);
}

BatchSetCdnDomainConfigRequest::~BatchSetCdnDomainConfigRequest() {}

std::string BatchSetCdnDomainConfigRequest::getFunctions() const {
  return functions_;
}

void BatchSetCdnDomainConfigRequest::setFunctions(const std::string &functions) {
  functions_ = functions;
  setParameter(std::string("Functions"), functions);
}

std::string BatchSetCdnDomainConfigRequest::getDomainNames() const {
  return domainNames_;
}

void BatchSetCdnDomainConfigRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchSetCdnDomainConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchSetCdnDomainConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchSetCdnDomainConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchSetCdnDomainConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BatchSetCdnDomainConfigRequest::getOwnerId() const {
  return ownerId_;
}

void BatchSetCdnDomainConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

