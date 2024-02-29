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

#include <alibabacloud/sddp/model/DescribeOssObjectsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeOssObjectsRequest;

DescribeOssObjectsRequest::DescribeOssObjectsRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeOssObjects") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOssObjectsRequest::~DescribeOssObjectsRequest() {}

std::string DescribeOssObjectsRequest::getRiskLevels() const {
  return riskLevels_;
}

void DescribeOssObjectsRequest::setRiskLevels(const std::string &riskLevels) {
  riskLevels_ = riskLevels;
  setParameter(std::string("RiskLevels"), riskLevels);
}

bool DescribeOssObjectsRequest::getNeedRiskCount() const {
  return needRiskCount_;
}

void DescribeOssObjectsRequest::setNeedRiskCount(bool needRiskCount) {
  needRiskCount_ = needRiskCount;
  setParameter(std::string("NeedRiskCount"), needRiskCount ? "true" : "false");
}

std::string DescribeOssObjectsRequest::getQueryName() const {
  return queryName_;
}

void DescribeOssObjectsRequest::setQueryName(const std::string &queryName) {
  queryName_ = queryName;
  setParameter(std::string("QueryName"), queryName);
}

int DescribeOssObjectsRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void DescribeOssObjectsRequest::setRiskLevelId(int riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

long DescribeOssObjectsRequest::getLastScanTimeEnd() const {
  return lastScanTimeEnd_;
}

void DescribeOssObjectsRequest::setLastScanTimeEnd(long lastScanTimeEnd) {
  lastScanTimeEnd_ = lastScanTimeEnd;
  setParameter(std::string("LastScanTimeEnd"), std::to_string(lastScanTimeEnd));
}

long DescribeOssObjectsRequest::getLastScanTimeStart() const {
  return lastScanTimeStart_;
}

void DescribeOssObjectsRequest::setLastScanTimeStart(long lastScanTimeStart) {
  lastScanTimeStart_ = lastScanTimeStart;
  setParameter(std::string("LastScanTimeStart"), std::to_string(lastScanTimeStart));
}

std::string DescribeOssObjectsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeOssObjectsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeOssObjectsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOssObjectsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOssObjectsRequest::getLang() const {
  return lang_;
}

void DescribeOssObjectsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeOssObjectsRequest::getServiceRegionId() const {
  return serviceRegionId_;
}

void DescribeOssObjectsRequest::setServiceRegionId(const std::string &serviceRegionId) {
  serviceRegionId_ = serviceRegionId;
  setParameter(std::string("ServiceRegionId"), serviceRegionId);
}

int DescribeOssObjectsRequest::getFeatureType() const {
  return featureType_;
}

void DescribeOssObjectsRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeOssObjectsRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeOssObjectsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long DescribeOssObjectsRequest::getFileCategoryCode() const {
  return fileCategoryCode_;
}

void DescribeOssObjectsRequest::setFileCategoryCode(long fileCategoryCode) {
  fileCategoryCode_ = fileCategoryCode;
  setParameter(std::string("FileCategoryCode"), std::to_string(fileCategoryCode));
}

int DescribeOssObjectsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeOssObjectsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeOssObjectsRequest::getTemplateId() const {
  return templateId_;
}

void DescribeOssObjectsRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string DescribeOssObjectsRequest::getRuleIds() const {
  return ruleIds_;
}

void DescribeOssObjectsRequest::setRuleIds(const std::string &ruleIds) {
  ruleIds_ = ruleIds;
  setParameter(std::string("RuleIds"), ruleIds);
}

std::string DescribeOssObjectsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOssObjectsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOssObjectsRequest::getName() const {
  return name_;
}

void DescribeOssObjectsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long DescribeOssObjectsRequest::getRuleId() const {
  return ruleId_;
}

void DescribeOssObjectsRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

int DescribeOssObjectsRequest::getCategory() const {
  return category_;
}

void DescribeOssObjectsRequest::setCategory(int category) {
  category_ = category;
  setParameter(std::string("Category"), std::to_string(category));
}

