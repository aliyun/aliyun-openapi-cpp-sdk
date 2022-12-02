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

#include <alibabacloud/sas/model/DescribeImageSensitiveFileListRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageSensitiveFileListRequest;

DescribeImageSensitiveFileListRequest::DescribeImageSensitiveFileListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageSensitiveFileList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageSensitiveFileListRequest::~DescribeImageSensitiveFileListRequest() {}

std::string DescribeImageSensitiveFileListRequest::getCriteria() const {
  return criteria_;
}

void DescribeImageSensitiveFileListRequest::setCriteria(const std::string &criteria) {
  criteria_ = criteria;
  setParameter(std::string("Criteria"), criteria);
}

std::string DescribeImageSensitiveFileListRequest::getUuid() const {
  return uuid_;
}

void DescribeImageSensitiveFileListRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::vector<DescribeImageSensitiveFileListRequest::std::string> DescribeImageSensitiveFileListRequest::getScanRange() const {
  return scanRange_;
}

void DescribeImageSensitiveFileListRequest::setScanRange(const std::vector<DescribeImageSensitiveFileListRequest::std::string> &scanRange) {
  scanRange_ = scanRange;
  for(int dep1 = 0; dep1 != scanRange.size(); dep1++) {
    setParameter(std::string("ScanRange") + "." + std::to_string(dep1 + 1), scanRange[dep1]);
  }
}

int DescribeImageSensitiveFileListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageSensitiveFileListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageSensitiveFileListRequest::getCriteriaType() const {
  return criteriaType_;
}

void DescribeImageSensitiveFileListRequest::setCriteriaType(const std::string &criteriaType) {
  criteriaType_ = criteriaType;
  setParameter(std::string("CriteriaType"), criteriaType);
}

std::string DescribeImageSensitiveFileListRequest::getLang() const {
  return lang_;
}

void DescribeImageSensitiveFileListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeImageSensitiveFileListRequest::getImageUuid() const {
  return imageUuid_;
}

void DescribeImageSensitiveFileListRequest::setImageUuid(const std::string &imageUuid) {
  imageUuid_ = imageUuid;
  setParameter(std::string("ImageUuid"), imageUuid);
}

int DescribeImageSensitiveFileListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageSensitiveFileListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageSensitiveFileListRequest::getRiskLevel() const {
  return riskLevel_;
}

void DescribeImageSensitiveFileListRequest::setRiskLevel(const std::string &riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), riskLevel);
}

