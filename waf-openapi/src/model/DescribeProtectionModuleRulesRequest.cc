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

#include <alibabacloud/waf-openapi/model/DescribeProtectionModuleRulesRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeProtectionModuleRulesRequest;

DescribeProtectionModuleRulesRequest::DescribeProtectionModuleRulesRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeProtectionModuleRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProtectionModuleRulesRequest::~DescribeProtectionModuleRulesRequest() {}

int DescribeProtectionModuleRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeProtectionModuleRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeProtectionModuleRulesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeProtectionModuleRulesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeProtectionModuleRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeProtectionModuleRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeProtectionModuleRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeProtectionModuleRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeProtectionModuleRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeProtectionModuleRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeProtectionModuleRulesRequest::getLang() const {
  return lang_;
}

void DescribeProtectionModuleRulesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeProtectionModuleRulesRequest::getDefenseType() const {
  return defenseType_;
}

void DescribeProtectionModuleRulesRequest::setDefenseType(const std::string &defenseType) {
  defenseType_ = defenseType;
  setParameter(std::string("DefenseType"), defenseType);
}

std::string DescribeProtectionModuleRulesRequest::getQuery() const {
  return query_;
}

void DescribeProtectionModuleRulesRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

std::string DescribeProtectionModuleRulesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeProtectionModuleRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeProtectionModuleRulesRequest::getDomain() const {
  return domain_;
}

void DescribeProtectionModuleRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

