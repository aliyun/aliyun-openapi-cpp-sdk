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

#include <alibabacloud/vod/model/DescribeVodDomainConfigsRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainConfigsRequest;

DescribeVodDomainConfigsRequest::DescribeVodDomainConfigsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodDomainConfigsRequest::~DescribeVodDomainConfigsRequest() {}

std::string DescribeVodDomainConfigsRequest::getFunctionNames() const {
  return functionNames_;
}

void DescribeVodDomainConfigsRequest::setFunctionNames(const std::string &functionNames) {
  functionNames_ = functionNames;
  setParameter(std::string("FunctionNames"), functionNames);
}

std::string DescribeVodDomainConfigsRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodDomainConfigsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeVodDomainConfigsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodDomainConfigsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodDomainConfigsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeVodDomainConfigsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

