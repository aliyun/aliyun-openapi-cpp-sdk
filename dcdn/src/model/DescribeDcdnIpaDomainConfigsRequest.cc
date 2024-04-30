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

#include <alibabacloud/dcdn/model/DescribeDcdnIpaDomainConfigsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnIpaDomainConfigsRequest;

DescribeDcdnIpaDomainConfigsRequest::DescribeDcdnIpaDomainConfigsRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnIpaDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnIpaDomainConfigsRequest::~DescribeDcdnIpaDomainConfigsRequest() {}

std::string DescribeDcdnIpaDomainConfigsRequest::getFunctionNames() const {
  return functionNames_;
}

void DescribeDcdnIpaDomainConfigsRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string DescribeDcdnIpaDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDcdnIpaDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDcdnIpaDomainConfigsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnIpaDomainConfigsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeDcdnIpaDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDcdnIpaDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

