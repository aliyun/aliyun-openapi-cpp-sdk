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

#include <alibabacloud/adb/model/DescribeAppliedAdvicesRequest.h>

using AlibabaCloud::Adb::Model::DescribeAppliedAdvicesRequest;

DescribeAppliedAdvicesRequest::DescribeAppliedAdvicesRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeAppliedAdvices") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAppliedAdvicesRequest::~DescribeAppliedAdvicesRequest() {}

std::string DescribeAppliedAdvicesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAppliedAdvicesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

long DescribeAppliedAdvicesRequest::getEndTime() const {
  return endTime_;
}

void DescribeAppliedAdvicesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeAppliedAdvicesRequest::getStartTime() const {
  return startTime_;
}

void DescribeAppliedAdvicesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long DescribeAppliedAdvicesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAppliedAdvicesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAppliedAdvicesRequest::getRegionId() const {
  return regionId_;
}

void DescribeAppliedAdvicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeAppliedAdvicesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAppliedAdvicesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAppliedAdvicesRequest::getLang() const {
  return lang_;
}

void DescribeAppliedAdvicesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

