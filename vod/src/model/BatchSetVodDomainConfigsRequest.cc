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

#include <alibabacloud/vod/model/BatchSetVodDomainConfigsRequest.h>

using AlibabaCloud::Vod::Model::BatchSetVodDomainConfigsRequest;

BatchSetVodDomainConfigsRequest::BatchSetVodDomainConfigsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "BatchSetVodDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

BatchSetVodDomainConfigsRequest::~BatchSetVodDomainConfigsRequest() {}

std::string BatchSetVodDomainConfigsRequest::getFunctions() const {
  return functions_;
}

void BatchSetVodDomainConfigsRequest::setFunctions(const std::string &functions) {
  functions_ = functions;
  setParameter(std::string("Functions"), functions);
}

std::string BatchSetVodDomainConfigsRequest::getDomainNames() const {
  return domainNames_;
}

void BatchSetVodDomainConfigsRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchSetVodDomainConfigsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchSetVodDomainConfigsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BatchSetVodDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void BatchSetVodDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BatchSetVodDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchSetVodDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

