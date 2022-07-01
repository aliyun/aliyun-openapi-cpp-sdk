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

#include <alibabacloud/ddoscoo/model/EnableWebCCRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::EnableWebCCRuleRequest;

EnableWebCCRuleRequest::EnableWebCCRuleRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "EnableWebCCRule") {
  setMethod(HttpRequest::Method::Post);
}

EnableWebCCRuleRequest::~EnableWebCCRuleRequest() {}

std::string EnableWebCCRuleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void EnableWebCCRuleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string EnableWebCCRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void EnableWebCCRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string EnableWebCCRuleRequest::getDomain() const {
  return domain_;
}

void EnableWebCCRuleRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

