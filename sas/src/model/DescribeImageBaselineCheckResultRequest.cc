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

#include <alibabacloud/sas/model/DescribeImageBaselineCheckResultRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageBaselineCheckResultRequest;

DescribeImageBaselineCheckResultRequest::DescribeImageBaselineCheckResultRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageBaselineCheckResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageBaselineCheckResultRequest::~DescribeImageBaselineCheckResultRequest() {}

std::string DescribeImageBaselineCheckResultRequest::getCriteria() const {
  return criteria_;
}

void DescribeImageBaselineCheckResultRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string DescribeImageBaselineCheckResultRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageBaselineCheckResultRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> DescribeImageBaselineCheckResultRequest::getScanRange() const {
  return scanRange_;
}

void DescribeImageBaselineCheckResultRequest::setScanRange(const std::vector<std::string> &scanRange) {
  scanRange_ = scanRange;
}

int DescribeImageBaselineCheckResultRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageBaselineCheckResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageBaselineCheckResultRequest::getCriteriaType() const {
  return criteriaType_;
}

void DescribeImageBaselineCheckResultRequest::setCriteriaType(const std::string &criteriaType) {
  criteriaType_ = criteriaType;
  setParameter(std::string("CriteriaType"), criteriaType);
}

std::string DescribeImageBaselineCheckResultRequest::getLang() const {
  return lang_;
}

void DescribeImageBaselineCheckResultRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeImageBaselineCheckResultRequest::getImageUuid() const {
  return imageUuid_;
}

void DescribeImageBaselineCheckResultRequest::setImageUuid(const std::string &imageUuid) {
  imageUuid_ = imageUuid;
  setParameter(std::string("ImageUuid"), imageUuid);
}

int DescribeImageBaselineCheckResultRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageBaselineCheckResultRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageBaselineCheckResultRequest::getRiskLevel() const {
  return riskLevel_;
}

void DescribeImageBaselineCheckResultRequest::setRiskLevel(const std::string &riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), riskLevel);
}

