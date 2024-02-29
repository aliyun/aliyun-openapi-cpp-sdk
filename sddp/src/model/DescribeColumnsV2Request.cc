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

#include <alibabacloud/sddp/model/DescribeColumnsV2Request.h>

using AlibabaCloud::Sddp::Model::DescribeColumnsV2Request;

DescribeColumnsV2Request::DescribeColumnsV2Request()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeColumnsV2") {
  setMethod(HttpRequest::Method::Post);
}

DescribeColumnsV2Request::~DescribeColumnsV2Request() {}

std::string DescribeColumnsV2Request::getProductCode() const {
  return productCode_;
}

void DescribeColumnsV2Request::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string DescribeColumnsV2Request::getRiskLevels() const {
  return riskLevels_;
}

void DescribeColumnsV2Request::setRiskLevels(const std::string &riskLevels) {
  riskLevels_ = riskLevels;
  setParameter(std::string("RiskLevels"), riskLevels);
}

std::string DescribeColumnsV2Request::getRuleName() const {
  return ruleName_;
}

void DescribeColumnsV2Request::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DescribeColumnsV2Request::getQueryName() const {
  return queryName_;
}

void DescribeColumnsV2Request::setQueryName(const std::string &queryName) {
  queryName_ = queryName;
  setParameter(std::string("QueryName"), queryName);
}

long DescribeColumnsV2Request::getRiskLevelId() const {
  return riskLevelId_;
}

void DescribeColumnsV2Request::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

std::string DescribeColumnsV2Request::getSensLevelName() const {
  return sensLevelName_;
}

void DescribeColumnsV2Request::setSensLevelName(const std::string &sensLevelName) {
  sensLevelName_ = sensLevelName;
  setParameter(std::string("SensLevelName"), sensLevelName);
}

std::string DescribeColumnsV2Request::getSourceIp() const {
  return sourceIp_;
}

void DescribeColumnsV2Request::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeColumnsV2Request::getPageSize() const {
  return pageSize_;
}

void DescribeColumnsV2Request::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeColumnsV2Request::getTableId() const {
  return tableId_;
}

void DescribeColumnsV2Request::setTableId(const std::string &tableId) {
  tableId_ = tableId;
  setParameter(std::string("TableId"), tableId);
}

std::string DescribeColumnsV2Request::getLang() const {
  return lang_;
}

void DescribeColumnsV2Request::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeColumnsV2Request::getTableName() const {
  return tableName_;
}

void DescribeColumnsV2Request::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

int DescribeColumnsV2Request::getFeatureType() const {
  return featureType_;
}

void DescribeColumnsV2Request::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeColumnsV2Request::getOrderBy() const {
  return orderBy_;
}

void DescribeColumnsV2Request::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int DescribeColumnsV2Request::getCurrentPage() const {
  return currentPage_;
}

void DescribeColumnsV2Request::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeColumnsV2Request::getInstanceId() const {
  return instanceId_;
}

void DescribeColumnsV2Request::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string DescribeColumnsV2Request::getInstanceName() const {
  return instanceName_;
}

void DescribeColumnsV2Request::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeColumnsV2Request::getName() const {
  return name_;
}

void DescribeColumnsV2Request::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long DescribeColumnsV2Request::getRuleId() const {
  return ruleId_;
}

void DescribeColumnsV2Request::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

