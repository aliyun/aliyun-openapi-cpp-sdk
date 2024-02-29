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

#include <alibabacloud/sddp/model/DescribeTablesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeTablesRequest;

DescribeTablesRequest::DescribeTablesRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeTables") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTablesRequest::~DescribeTablesRequest() {}

std::string DescribeTablesRequest::getProductCode() const {
  return productCode_;
}

void DescribeTablesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long DescribeTablesRequest::getProductId() const {
  return productId_;
}

void DescribeTablesRequest::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string DescribeTablesRequest::getRiskLevels() const {
  return riskLevels_;
}

void DescribeTablesRequest::setRiskLevels(const std::string &riskLevels) {
  riskLevels_ = riskLevels;
  setParameter(std::string("RiskLevels"), riskLevels);
}

bool DescribeTablesRequest::getNeedRiskCount() const {
  return needRiskCount_;
}

void DescribeTablesRequest::setNeedRiskCount(bool needRiskCount) {
  needRiskCount_ = needRiskCount;
  setParameter(std::string("NeedRiskCount"), needRiskCount ? "true" : "false");
}

long DescribeTablesRequest::getPackageId() const {
  return packageId_;
}

void DescribeTablesRequest::setPackageId(long packageId) {
  packageId_ = packageId;
  setParameter(std::string("PackageId"), std::to_string(packageId));
}

std::string DescribeTablesRequest::getRuleName() const {
  return ruleName_;
}

void DescribeTablesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DescribeTablesRequest::getQueryName() const {
  return queryName_;
}

void DescribeTablesRequest::setQueryName(const std::string &queryName) {
  queryName_ = queryName;
  setParameter(std::string("QueryName"), queryName);
}

long DescribeTablesRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void DescribeTablesRequest::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

long DescribeTablesRequest::getStartTime() const {
  return startTime_;
}

void DescribeTablesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long DescribeTablesRequest::getLastScanTimeEnd() const {
  return lastScanTimeEnd_;
}

void DescribeTablesRequest::setLastScanTimeEnd(long lastScanTimeEnd) {
  lastScanTimeEnd_ = lastScanTimeEnd;
  setParameter(std::string("LastScanTimeEnd"), std::to_string(lastScanTimeEnd));
}

long DescribeTablesRequest::getLastScanTimeStart() const {
  return lastScanTimeStart_;
}

void DescribeTablesRequest::setLastScanTimeStart(long lastScanTimeStart) {
  lastScanTimeStart_ = lastScanTimeStart;
  setParameter(std::string("LastScanTimeStart"), std::to_string(lastScanTimeStart));
}

std::string DescribeTablesRequest::getSensLevelName() const {
  return sensLevelName_;
}

void DescribeTablesRequest::setSensLevelName(const std::string &sensLevelName) {
  sensLevelName_ = sensLevelName;
  setParameter(std::string("SensLevelName"), sensLevelName);
}

std::string DescribeTablesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeTablesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeTablesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTablesRequest::getInstanceDescription() const {
  return instanceDescription_;
}

void DescribeTablesRequest::setInstanceDescription(const std::string &instanceDescription) {
  instanceDescription_ = instanceDescription;
  setParameter(std::string("InstanceDescription"), instanceDescription);
}

std::string DescribeTablesRequest::getLang() const {
  return lang_;
}

void DescribeTablesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeTablesRequest::getQueryType() const {
  return queryType_;
}

void DescribeTablesRequest::setQueryType(int queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), std::to_string(queryType));
}

std::string DescribeTablesRequest::getServiceRegionId() const {
  return serviceRegionId_;
}

void DescribeTablesRequest::setServiceRegionId(const std::string &serviceRegionId) {
  serviceRegionId_ = serviceRegionId;
  setParameter(std::string("ServiceRegionId"), serviceRegionId);
}

int DescribeTablesRequest::getFeatureType() const {
  return featureType_;
}

void DescribeTablesRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeTablesRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeTablesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long DescribeTablesRequest::getEndTime() const {
  return endTime_;
}

void DescribeTablesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeTablesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeTablesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeTablesRequest::getTemplateId() const {
  return templateId_;
}

void DescribeTablesRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string DescribeTablesRequest::getRuleIds() const {
  return ruleIds_;
}

void DescribeTablesRequest::setRuleIds(const std::string &ruleIds) {
  ruleIds_ = ruleIds;
  setParameter(std::string("RuleIds"), ruleIds);
}

long DescribeTablesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTablesRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

std::string DescribeTablesRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeTablesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeTablesRequest::getName() const {
  return name_;
}

void DescribeTablesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long DescribeTablesRequest::getRuleId() const {
  return ruleId_;
}

void DescribeTablesRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

