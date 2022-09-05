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

#include <alibabacloud/cdn/model/DescribeCdnDomainConfigsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDomainConfigsRequest;

DescribeCdnDomainConfigsRequest::DescribeCdnDomainConfigsRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnDomainConfigsRequest::~DescribeCdnDomainConfigsRequest() {}

std::string DescribeCdnDomainConfigsRequest::getFunctionNames() const {
  return functionNames_;
}

void DescribeCdnDomainConfigsRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string DescribeCdnDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeCdnDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeCdnDomainConfigsRequest::getDomainName() const {
  return domainName_;
}

void DescribeCdnDomainConfigsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeCdnDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCdnDomainConfigsRequest::getConfigId() const {
  return configId_;
}

void DescribeCdnDomainConfigsRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

