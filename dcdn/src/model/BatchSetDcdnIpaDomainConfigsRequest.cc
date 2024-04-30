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

#include <alibabacloud/dcdn/model/BatchSetDcdnIpaDomainConfigsRequest.h>

using AlibabaCloud::Dcdn::Model::BatchSetDcdnIpaDomainConfigsRequest;

BatchSetDcdnIpaDomainConfigsRequest::BatchSetDcdnIpaDomainConfigsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchSetDcdnIpaDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

BatchSetDcdnIpaDomainConfigsRequest::~BatchSetDcdnIpaDomainConfigsRequest() {}

std::string BatchSetDcdnIpaDomainConfigsRequest::getFunctions() const {
  return functions_;
}

void BatchSetDcdnIpaDomainConfigsRequest::setFunctions(const std::string &functions) {
  functions_ = functions;
  setParameter(std::string("Functions"), functions);
}

std::string BatchSetDcdnIpaDomainConfigsRequest::getDomainNames() const {
  return domainNames_;
}

void BatchSetDcdnIpaDomainConfigsRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchSetDcdnIpaDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchSetDcdnIpaDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchSetDcdnIpaDomainConfigsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchSetDcdnIpaDomainConfigsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BatchSetDcdnIpaDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void BatchSetDcdnIpaDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

