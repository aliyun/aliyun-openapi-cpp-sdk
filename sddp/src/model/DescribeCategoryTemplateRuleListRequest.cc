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

#include <alibabacloud/sddp/model/DescribeCategoryTemplateRuleListRequest.h>

using AlibabaCloud::Sddp::Model::DescribeCategoryTemplateRuleListRequest;

DescribeCategoryTemplateRuleListRequest::DescribeCategoryTemplateRuleListRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeCategoryTemplateRuleList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCategoryTemplateRuleListRequest::~DescribeCategoryTemplateRuleListRequest() {}

long DescribeCategoryTemplateRuleListRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void DescribeCategoryTemplateRuleListRequest::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

std::string DescribeCategoryTemplateRuleListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCategoryTemplateRuleListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeCategoryTemplateRuleListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCategoryTemplateRuleListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCategoryTemplateRuleListRequest::getLang() const {
  return lang_;
}

void DescribeCategoryTemplateRuleListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeCategoryTemplateRuleListRequest::getFeatureType() const {
  return featureType_;
}

void DescribeCategoryTemplateRuleListRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeCategoryTemplateRuleListRequest::getParentCategoryIdList() const {
  return parentCategoryIdList_;
}

void DescribeCategoryTemplateRuleListRequest::setParentCategoryIdList(const std::string &parentCategoryIdList) {
  parentCategoryIdList_ = parentCategoryIdList;
  setParameter(std::string("ParentCategoryIdList"), parentCategoryIdList);
}

int DescribeCategoryTemplateRuleListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCategoryTemplateRuleListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeCategoryTemplateRuleListRequest::getTemplateId() const {
  return templateId_;
}

void DescribeCategoryTemplateRuleListRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

int DescribeCategoryTemplateRuleListRequest::getCustomType() const {
  return customType_;
}

void DescribeCategoryTemplateRuleListRequest::setCustomType(int customType) {
  customType_ = customType;
  setParameter(std::string("CustomType"), std::to_string(customType));
}

int DescribeCategoryTemplateRuleListRequest::getStatus() const {
  return status_;
}

void DescribeCategoryTemplateRuleListRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

