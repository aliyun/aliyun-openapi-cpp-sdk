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

#include <alibabacloud/sddp/model/DescribeDataMaskingTasksRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataMaskingTasksRequest;

DescribeDataMaskingTasksRequest::DescribeDataMaskingTasksRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeDataMaskingTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataMaskingTasksRequest::~DescribeDataMaskingTasksRequest() {}

std::string DescribeDataMaskingTasksRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeDataMaskingTasksRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

long DescribeDataMaskingTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeDataMaskingTasksRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDataMaskingTasksRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDataMaskingTasksRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDataMaskingTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataMaskingTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataMaskingTasksRequest::getLang() const {
  return lang_;
}

void DescribeDataMaskingTasksRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeDataMaskingTasksRequest::getFeatureType() const {
  return featureType_;
}

void DescribeDataMaskingTasksRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

long DescribeDataMaskingTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeDataMaskingTasksRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeDataMaskingTasksRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeDataMaskingTasksRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int DescribeDataMaskingTasksRequest::getDstType() const {
  return dstType_;
}

void DescribeDataMaskingTasksRequest::setDstType(int dstType) {
  dstType_ = dstType;
  setParameter(std::string("DstType"), std::to_string(dstType));
}

