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

#include <alibabacloud/sddp/model/DescribeColumnsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeColumnsRequest;

DescribeColumnsRequest::DescribeColumnsRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeColumns") {
  setMethod(HttpRequest::Method::Post);
}

DescribeColumnsRequest::~DescribeColumnsRequest() {}

std::string DescribeColumnsRequest::getProductCode() const {
  return productCode_;
}

void DescribeColumnsRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string DescribeColumnsRequest::getRiskLevels() const {
  return riskLevels_;
}

void DescribeColumnsRequest::setRiskLevels(const std::string &riskLevels) {
  riskLevels_ = riskLevels;
  setParameter(std::string("RiskLevels"), riskLevels);
}

std::string DescribeColumnsRequest::getRuleName() const {
  return ruleName_;
}

void DescribeColumnsRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DescribeColumnsRequest::getQueryName() const {
  return queryName_;
}

void DescribeColumnsRequest::setQueryName(const std::string &queryName) {
  queryName_ = queryName;
  setParameter(std::string("QueryName"), queryName);
}

long DescribeColumnsRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void DescribeColumnsRequest::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

std::string DescribeColumnsRequest::getSensLevelName() const {
  return sensLevelName_;
}

void DescribeColumnsRequest::setSensLevelName(const std::string &sensLevelName) {
  sensLevelName_ = sensLevelName;
  setParameter(std::string("SensLevelName"), sensLevelName);
}

std::string DescribeColumnsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeColumnsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeColumnsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeColumnsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeColumnsRequest::getTableId() const {
  return tableId_;
}

void DescribeColumnsRequest::setTableId(long tableId) {
  tableId_ = tableId;
  setParameter(std::string("TableId"), std::to_string(tableId));
}

std::string DescribeColumnsRequest::getLang() const {
  return lang_;
}

void DescribeColumnsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeColumnsRequest::getTableName() const {
  return tableName_;
}

void DescribeColumnsRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

int DescribeColumnsRequest::getFeatureType() const {
  return featureType_;
}

void DescribeColumnsRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeColumnsRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeColumnsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int DescribeColumnsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeColumnsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeColumnsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeColumnsRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string DescribeColumnsRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeColumnsRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeColumnsRequest::getName() const {
  return name_;
}

void DescribeColumnsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long DescribeColumnsRequest::getRuleId() const {
  return ruleId_;
}

void DescribeColumnsRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

