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

#include <alibabacloud/dts/model/DescribeDtsEtlJobVersionInfoRequest.h>

using AlibabaCloud::Dts::Model::DescribeDtsEtlJobVersionInfoRequest;

DescribeDtsEtlJobVersionInfoRequest::DescribeDtsEtlJobVersionInfoRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDtsEtlJobVersionInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDtsEtlJobVersionInfoRequest::~DescribeDtsEtlJobVersionInfoRequest() {}

int DescribeDtsEtlJobVersionInfoRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDtsEtlJobVersionInfoRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDtsEtlJobVersionInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeDtsEtlJobVersionInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDtsEtlJobVersionInfoRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDtsEtlJobVersionInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDtsEtlJobVersionInfoRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeDtsEtlJobVersionInfoRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeDtsEtlJobVersionInfoRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void DescribeDtsEtlJobVersionInfoRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

