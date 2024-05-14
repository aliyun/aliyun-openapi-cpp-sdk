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

#include <alibabacloud/waf-openapi/model/DescribeDomainRuleGroupRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeDomainRuleGroupRequest;

DescribeDomainRuleGroupRequest::DescribeDomainRuleGroupRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeDomainRuleGroup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainRuleGroupRequest::~DescribeDomainRuleGroupRequest() {}

std::string DescribeDomainRuleGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainRuleGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDomainRuleGroupRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainRuleGroupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDomainRuleGroupRequest::getRegionId() const {
  return regionId_;
}

void DescribeDomainRuleGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDomainRuleGroupRequest::getLang() const {
  return lang_;
}

void DescribeDomainRuleGroupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDomainRuleGroupRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDomainRuleGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDomainRuleGroupRequest::getDomain() const {
  return domain_;
}

void DescribeDomainRuleGroupRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

