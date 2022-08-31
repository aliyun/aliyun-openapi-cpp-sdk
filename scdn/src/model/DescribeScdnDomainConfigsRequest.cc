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

#include <alibabacloud/scdn/model/DescribeScdnDomainConfigsRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainConfigsRequest;

DescribeScdnDomainConfigsRequest::DescribeScdnDomainConfigsRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainConfigsRequest::~DescribeScdnDomainConfigsRequest() {}

std::string DescribeScdnDomainConfigsRequest::getFunctionNames() const {
  return functionNames_;
}

void DescribeScdnDomainConfigsRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string DescribeScdnDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeScdnDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeScdnDomainConfigsRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainConfigsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeScdnDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScdnDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeScdnDomainConfigsRequest::getConfigId() const {
  return configId_;
}

void DescribeScdnDomainConfigsRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

