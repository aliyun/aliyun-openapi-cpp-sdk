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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainConfigsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainConfigsRequest;

DescribeDcdnDomainConfigsRequest::DescribeDcdnDomainConfigsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnDomainConfigsRequest::~DescribeDcdnDomainConfigsRequest() {}

std::string DescribeDcdnDomainConfigsRequest::getFunctionNames() const {
  return functionNames_;
}

void DescribeDcdnDomainConfigsRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string DescribeDcdnDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDcdnDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDcdnDomainConfigsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnDomainConfigsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDcdnDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDcdnDomainConfigsRequest::getConfigId() const {
  return configId_;
}

void DescribeDcdnDomainConfigsRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

