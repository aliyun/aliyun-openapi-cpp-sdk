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

#include <alibabacloud/ddoscoo/model/DescribeDefenseRecordsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDefenseRecordsRequest;

DescribeDefenseRecordsRequest::DescribeDefenseRecordsRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDefenseRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDefenseRecordsRequest::~DescribeDefenseRecordsRequest() {}

long DescribeDefenseRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDefenseRecordsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeDefenseRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDefenseRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDefenseRecordsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDefenseRecordsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDefenseRecordsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDefenseRecordsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeDefenseRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDefenseRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDefenseRecordsRequest::getLang() const {
  return lang_;
}

void DescribeDefenseRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeDefenseRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDefenseRecordsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeDefenseRecordsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDefenseRecordsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

