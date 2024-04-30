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

#include <alibabacloud/dcdn/model/DescribeKvUsageDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeKvUsageDataRequest;

DescribeKvUsageDataRequest::DescribeKvUsageDataRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeKvUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeKvUsageDataRequest::~DescribeKvUsageDataRequest() {}

std::string DescribeKvUsageDataRequest::getAccessType() const {
  return accessType_;
}

void DescribeKvUsageDataRequest::setAccessType(const std::string &accessType) {
  accessType_ = accessType;
  setParameter(std::string("AccessType"), accessType);
}

std::string DescribeKvUsageDataRequest::getField() const {
  return field_;
}

void DescribeKvUsageDataRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

std::string DescribeKvUsageDataRequest::getNamespaceId() const {
  return namespaceId_;
}

void DescribeKvUsageDataRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string DescribeKvUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeKvUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeKvUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeKvUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeKvUsageDataRequest::getResponseType() const {
  return responseType_;
}

void DescribeKvUsageDataRequest::setResponseType(const std::string &responseType) {
  responseType_ = responseType;
  setParameter(std::string("ResponseType"), responseType);
}

std::string DescribeKvUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeKvUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

