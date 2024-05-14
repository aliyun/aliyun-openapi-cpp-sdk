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

#include <alibabacloud/waf-openapi/model/DescribeRulesRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeRulesRequest;

DescribeRulesRequest::DescribeRulesRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRulesRequest::~DescribeRulesRequest() {}

long DescribeRulesRequest::getRuleGroupId() const {
  return ruleGroupId_;
}

void DescribeRulesRequest::setRuleGroupId(long ruleGroupId) {
  ruleGroupId_ = ruleGroupId;
  setParameter(std::string("RuleGroupId"), std::to_string(ruleGroupId));
}

int DescribeRulesRequest::getProtectionType() const {
  return protectionType_;
}

void DescribeRulesRequest::setProtectionType(int protectionType) {
  protectionType_ = protectionType;
  setParameter(std::string("ProtectionType"), std::to_string(protectionType));
}

int DescribeRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRulesRequest::getCveIdKey() const {
  return cveIdKey_;
}

void DescribeRulesRequest::setCveIdKey(const std::string &cveIdKey) {
  cveIdKey_ = cveIdKey;
  setParameter(std::string("CveIdKey"), cveIdKey);
}

std::string DescribeRulesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRulesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRulesRequest::getLang() const {
  return lang_;
}

void DescribeRulesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeRulesRequest::getRiskLevel() const {
  return riskLevel_;
}

void DescribeRulesRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string DescribeRulesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRulesRequest::getRuleIdKey() const {
  return ruleIdKey_;
}

void DescribeRulesRequest::setRuleIdKey(const std::string &ruleIdKey) {
  ruleIdKey_ = ruleIdKey;
  setParameter(std::string("RuleIdKey"), ruleIdKey);
}

std::string DescribeRulesRequest::getRegion() const {
  return region_;
}

void DescribeRulesRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

int DescribeRulesRequest::getApplicationType() const {
  return applicationType_;
}

void DescribeRulesRequest::setApplicationType(int applicationType) {
  applicationType_ = applicationType;
  setParameter(std::string("ApplicationType"), std::to_string(applicationType));
}

