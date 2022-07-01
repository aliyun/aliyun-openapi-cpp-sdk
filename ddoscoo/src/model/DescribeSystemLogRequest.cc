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

#include <alibabacloud/ddoscoo/model/DescribeSystemLogRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeSystemLogRequest;

DescribeSystemLogRequest::DescribeSystemLogRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeSystemLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSystemLogRequest::~DescribeSystemLogRequest() {}

long DescribeSystemLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeSystemLogRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeSystemLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSystemLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSystemLogRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSystemLogRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeSystemLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSystemLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeSystemLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeSystemLogRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeSystemLogRequest::getEntityObject() const {
  return entityObject_;
}

void DescribeSystemLogRequest::setEntityObject(const std::string &entityObject) {
  entityObject_ = entityObject;
  setParameter(std::string("EntityObject"), entityObject);
}

int DescribeSystemLogRequest::getEntityType() const {
  return entityType_;
}

void DescribeSystemLogRequest::setEntityType(int entityType) {
  entityType_ = entityType;
  setParameter(std::string("EntityType"), std::to_string(entityType));
}

