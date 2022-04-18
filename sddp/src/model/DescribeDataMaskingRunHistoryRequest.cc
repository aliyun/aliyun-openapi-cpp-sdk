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

#include <alibabacloud/sddp/model/DescribeDataMaskingRunHistoryRequest.h>

using AlibabaCloud::Sddp::Model::DescribeDataMaskingRunHistoryRequest;

DescribeDataMaskingRunHistoryRequest::DescribeDataMaskingRunHistoryRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeDataMaskingRunHistory") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataMaskingRunHistoryRequest::~DescribeDataMaskingRunHistoryRequest() {}

int DescribeDataMaskingRunHistoryRequest::getSrcType() const {
  return srcType_;
}

void DescribeDataMaskingRunHistoryRequest::setSrcType(int srcType) {
  srcType_ = srcType;
  setParameter(std::string("SrcType"), std::to_string(srcType));
}

long DescribeDataMaskingRunHistoryRequest::getMainProcessId() const {
  return mainProcessId_;
}

void DescribeDataMaskingRunHistoryRequest::setMainProcessId(long mainProcessId) {
  mainProcessId_ = mainProcessId;
  setParameter(std::string("MainProcessId"), std::to_string(mainProcessId));
}

long DescribeDataMaskingRunHistoryRequest::getStartTime() const {
  return startTime_;
}

void DescribeDataMaskingRunHistoryRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDataMaskingRunHistoryRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDataMaskingRunHistoryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDataMaskingRunHistoryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataMaskingRunHistoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataMaskingRunHistoryRequest::getLang() const {
  return lang_;
}

void DescribeDataMaskingRunHistoryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDataMaskingRunHistoryRequest::getTaskId() const {
  return taskId_;
}

void DescribeDataMaskingRunHistoryRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeDataMaskingRunHistoryRequest::getSrcTableName() const {
  return srcTableName_;
}

void DescribeDataMaskingRunHistoryRequest::setSrcTableName(const std::string &srcTableName) {
  srcTableName_ = srcTableName;
  setParameter(std::string("SrcTableName"), srcTableName);
}

int DescribeDataMaskingRunHistoryRequest::getFeatureType() const {
  return featureType_;
}

void DescribeDataMaskingRunHistoryRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

long DescribeDataMaskingRunHistoryRequest::getEndTime() const {
  return endTime_;
}

void DescribeDataMaskingRunHistoryRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeDataMaskingRunHistoryRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeDataMaskingRunHistoryRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int DescribeDataMaskingRunHistoryRequest::getDstType() const {
  return dstType_;
}

void DescribeDataMaskingRunHistoryRequest::setDstType(int dstType) {
  dstType_ = dstType;
  setParameter(std::string("DstType"), std::to_string(dstType));
}

int DescribeDataMaskingRunHistoryRequest::getStatus() const {
  return status_;
}

void DescribeDataMaskingRunHistoryRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

