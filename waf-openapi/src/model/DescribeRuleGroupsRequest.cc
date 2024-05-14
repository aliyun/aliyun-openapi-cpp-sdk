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

#include <alibabacloud/waf-openapi/model/DescribeRuleGroupsRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeRuleGroupsRequest;

DescribeRuleGroupsRequest::DescribeRuleGroupsRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeRuleGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRuleGroupsRequest::~DescribeRuleGroupsRequest() {}

int DescribeRuleGroupsRequest::getType() const {
  return type_;
}

void DescribeRuleGroupsRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string DescribeRuleGroupsRequest::getWafLang() const {
  return wafLang_;
}

void DescribeRuleGroupsRequest::setWafLang(const std::string &wafLang) {
  wafLang_ = wafLang;
  setParameter(std::string("WafLang"), wafLang);
}

std::string DescribeRuleGroupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRuleGroupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRuleGroupsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeRuleGroupsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeRuleGroupsRequest::getPolicyId() const {
  return policyId_;
}

void DescribeRuleGroupsRequest::setPolicyId(long policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), std::to_string(policyId));
}

std::string DescribeRuleGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRuleGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRuleGroupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRuleGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRuleGroupsRequest::getLang() const {
  return lang_;
}

void DescribeRuleGroupsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeRuleGroupsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeRuleGroupsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeRuleGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRuleGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRuleGroupsRequest::getRegion() const {
  return region_;
}

void DescribeRuleGroupsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

