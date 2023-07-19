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

#include <alibabacloud/dts/model/DescribePreCheckStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribePreCheckStatusRequest;

DescribePreCheckStatusRequest::DescribePreCheckStatusRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribePreCheckStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribePreCheckStatusRequest::~DescribePreCheckStatusRequest() {}

std::string DescribePreCheckStatusRequest::getStructType() const {
  return structType_;
}

void DescribePreCheckStatusRequest::setStructType(const std::string &structType) {
  structType_ = structType;
  setParameter(std::string("StructType"), structType);
}

std::string DescribePreCheckStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribePreCheckStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePreCheckStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribePreCheckStatusRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribePreCheckStatusRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribePreCheckStatusRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribePreCheckStatusRequest::getPageNo() const {
  return pageNo_;
}

void DescribePreCheckStatusRequest::setPageNo(const std::string &pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), pageNo);
}

std::string DescribePreCheckStatusRequest::getJobCode() const {
  return jobCode_;
}

void DescribePreCheckStatusRequest::setJobCode(const std::string &jobCode) {
  jobCode_ = jobCode;
  setParameter(std::string("JobCode"), jobCode);
}

std::string DescribePreCheckStatusRequest::getName() const {
  return name_;
}

void DescribePreCheckStatusRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribePreCheckStatusRequest::getStructPhase() const {
  return structPhase_;
}

void DescribePreCheckStatusRequest::setStructPhase(const std::string &structPhase) {
  structPhase_ = structPhase;
  setParameter(std::string("StructPhase"), structPhase);
}

