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

#include <alibabacloud/sas/model/DescribeImageBaselineItemListRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageBaselineItemListRequest;

DescribeImageBaselineItemListRequest::DescribeImageBaselineItemListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageBaselineItemList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageBaselineItemListRequest::~DescribeImageBaselineItemListRequest() {}

std::string DescribeImageBaselineItemListRequest::getBaselineClassKey() const {
  return baselineClassKey_;
}

void DescribeImageBaselineItemListRequest::setBaselineClassKey(const std::string &baselineClassKey) {
  baselineClassKey_ = baselineClassKey;
  setParameter(std::string("BaselineClassKey"), baselineClassKey);
}

std::string DescribeImageBaselineItemListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageBaselineItemListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::vector<std::string> DescribeImageBaselineItemListRequest::getScanRange() const {
  return scanRange_;
}

void DescribeImageBaselineItemListRequest::setScanRange(const std::vector<std::string> &scanRange) {
  scanRange_ = scanRange;
}

int DescribeImageBaselineItemListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageBaselineItemListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageBaselineItemListRequest::getLang() const {
  return lang_;
}

void DescribeImageBaselineItemListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeImageBaselineItemListRequest::getImageUuid() const {
  return imageUuid_;
}

void DescribeImageBaselineItemListRequest::setImageUuid(const std::string &imageUuid) {
  imageUuid_ = imageUuid;
  setParameter(std::string("ImageUuid"), imageUuid);
}

int DescribeImageBaselineItemListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageBaselineItemListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageBaselineItemListRequest::getBaselineNameKey() const {
  return baselineNameKey_;
}

void DescribeImageBaselineItemListRequest::setBaselineNameKey(const std::string &baselineNameKey) {
  baselineNameKey_ = baselineNameKey;
  setParameter(std::string("BaselineNameKey"), baselineNameKey);
}

std::string DescribeImageBaselineItemListRequest::getStatus() const {
  return status_;
}

void DescribeImageBaselineItemListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::vector<std::string> DescribeImageBaselineItemListRequest::getUuids() const {
  return uuids_;
}

void DescribeImageBaselineItemListRequest::setUuids(const std::vector<std::string> &uuids) {
  uuids_ = uuids;
}

