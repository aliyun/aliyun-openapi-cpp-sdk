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

#include <alibabacloud/sddp/model/DescribePackagesRequest.h>

using AlibabaCloud::Sddp::Model::DescribePackagesRequest;

DescribePackagesRequest::DescribePackagesRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribePackages") {
  setMethod(HttpRequest::Method::Post);
}

DescribePackagesRequest::~DescribePackagesRequest() {}

long DescribePackagesRequest::getProductId() const {
  return productId_;
}

void DescribePackagesRequest::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string DescribePackagesRequest::getRiskLevels() const {
  return riskLevels_;
}

void DescribePackagesRequest::setRiskLevels(const std::string &riskLevels) {
  riskLevels_ = riskLevels;
  setParameter(std::string("RiskLevels"), riskLevels);
}

std::string DescribePackagesRequest::getQueryName() const {
  return queryName_;
}

void DescribePackagesRequest::setQueryName(const std::string &queryName) {
  queryName_ = queryName;
  setParameter(std::string("QueryName"), queryName);
}

long DescribePackagesRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void DescribePackagesRequest::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

std::string DescribePackagesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribePackagesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribePackagesRequest::getPageSize() const {
  return pageSize_;
}

void DescribePackagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePackagesRequest::getLang() const {
  return lang_;
}

void DescribePackagesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribePackagesRequest::getQueryType() const {
  return queryType_;
}

void DescribePackagesRequest::setQueryType(int queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), std::to_string(queryType));
}

int DescribePackagesRequest::getFeatureType() const {
  return featureType_;
}

void DescribePackagesRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribePackagesRequest::getOrderBy() const {
  return orderBy_;
}

void DescribePackagesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int DescribePackagesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribePackagesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribePackagesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribePackagesRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string DescribePackagesRequest::getName() const {
  return name_;
}

void DescribePackagesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long DescribePackagesRequest::getRuleId() const {
  return ruleId_;
}

void DescribePackagesRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

