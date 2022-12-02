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

#include <alibabacloud/dts/model/DescribeDtsServiceLogRequest.h>

using AlibabaCloud::Dts::Model::DescribeDtsServiceLogRequest;

DescribeDtsServiceLogRequest::DescribeDtsServiceLogRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDtsServiceLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDtsServiceLogRequest::~DescribeDtsServiceLogRequest() {}

long DescribeDtsServiceLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeDtsServiceLogRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int DescribeDtsServiceLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDtsServiceLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDtsServiceLogRequest::getRegionId() const {
  return regionId_;
}

void DescribeDtsServiceLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDtsServiceLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDtsServiceLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDtsServiceLogRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeDtsServiceLogRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeDtsServiceLogRequest::getKeyword() const {
  return keyword_;
}

void DescribeDtsServiceLogRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeDtsServiceLogRequest::getSubJobType() const {
  return subJobType_;
}

void DescribeDtsServiceLogRequest::setSubJobType(const std::string &subJobType) {
  subJobType_ = subJobType;
  setParameter(std::string("SubJobType"), subJobType);
}

long DescribeDtsServiceLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeDtsServiceLogRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string DescribeDtsServiceLogRequest::getStatus() const {
  return status_;
}

void DescribeDtsServiceLogRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

