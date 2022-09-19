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

#include <alibabacloud/sas/model/DescribeImageBaselineCheckSummaryRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageBaselineCheckSummaryRequest;

DescribeImageBaselineCheckSummaryRequest::DescribeImageBaselineCheckSummaryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageBaselineCheckSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageBaselineCheckSummaryRequest::~DescribeImageBaselineCheckSummaryRequest() {}

std::string DescribeImageBaselineCheckSummaryRequest::getCriteria() const {
  return criteria_;
}

void DescribeImageBaselineCheckSummaryRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string DescribeImageBaselineCheckSummaryRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageBaselineCheckSummaryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> DescribeImageBaselineCheckSummaryRequest::getScanRange() const {
  return scanRange_;
}

void DescribeImageBaselineCheckSummaryRequest::setScanRange(const std::vector<std::string> &scanRange) {
  scanRange_ = scanRange;
}

int DescribeImageBaselineCheckSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageBaselineCheckSummaryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageBaselineCheckSummaryRequest::getCriteriaType() const {
  return criteriaType_;
}

void DescribeImageBaselineCheckSummaryRequest::setCriteriaType(const std::string &criteriaType) {
  criteriaType_ = criteriaType;
  setParameter(std::string("CriteriaType"), criteriaType);
}

std::string DescribeImageBaselineCheckSummaryRequest::getLang() const {
  return lang_;
}

void DescribeImageBaselineCheckSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeImageBaselineCheckSummaryRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageBaselineCheckSummaryRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageBaselineCheckSummaryRequest::getClusterId() const {
  return clusterId_;
}

void DescribeImageBaselineCheckSummaryRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeImageBaselineCheckSummaryRequest::getRiskLevel() const {
  return riskLevel_;
}

void DescribeImageBaselineCheckSummaryRequest::setRiskLevel(const std::string &riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), riskLevel);
}

