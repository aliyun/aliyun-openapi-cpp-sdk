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

#include <alibabacloud/sas/model/DescribeOnceTaskLeafRecordPageRequest.h>

using AlibabaCloud::Sas::Model::DescribeOnceTaskLeafRecordPageRequest;

DescribeOnceTaskLeafRecordPageRequest::DescribeOnceTaskLeafRecordPageRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeOnceTaskLeafRecordPage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOnceTaskLeafRecordPageRequest::~DescribeOnceTaskLeafRecordPageRequest() {}

std::vector<std::string> DescribeOnceTaskLeafRecordPageRequest::getStatusList() const {
  return statusList_;
}

void DescribeOnceTaskLeafRecordPageRequest::setStatusList(const std::vector<std::string> &statusList) {
  statusList_ = statusList;
}

std::string DescribeOnceTaskLeafRecordPageRequest::getSource() const {
  return source_;
}

void DescribeOnceTaskLeafRecordPageRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

long DescribeOnceTaskLeafRecordPageRequest::getStartTime() const {
  return startTime_;
}

void DescribeOnceTaskLeafRecordPageRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeOnceTaskLeafRecordPageRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeOnceTaskLeafRecordPageRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeOnceTaskLeafRecordPageRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOnceTaskLeafRecordPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOnceTaskLeafRecordPageRequest::getTaskId() const {
  return taskId_;
}

void DescribeOnceTaskLeafRecordPageRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeOnceTaskLeafRecordPageRequest::getTaskType() const {
  return taskType_;
}

void DescribeOnceTaskLeafRecordPageRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

bool DescribeOnceTaskLeafRecordPageRequest::getRelateInfo() const {
  return relateInfo_;
}

void DescribeOnceTaskLeafRecordPageRequest::setRelateInfo(bool relateInfo) {
  relateInfo_ = relateInfo;
  setParameter(std::string("RelateInfo"), relateInfo ? "true" : "false");
}

long DescribeOnceTaskLeafRecordPageRequest::getEndTime() const {
  return endTime_;
}

void DescribeOnceTaskLeafRecordPageRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeOnceTaskLeafRecordPageRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeOnceTaskLeafRecordPageRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

