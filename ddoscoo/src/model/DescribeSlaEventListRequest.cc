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

#include <alibabacloud/ddoscoo/model/DescribeSlaEventListRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeSlaEventListRequest;

DescribeSlaEventListRequest::DescribeSlaEventListRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeSlaEventList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSlaEventListRequest::~DescribeSlaEventListRequest() {}

long DescribeSlaEventListRequest::getStartTime() const {
  return startTime_;
}

void DescribeSlaEventListRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeSlaEventListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeSlaEventListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeSlaEventListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSlaEventListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSlaEventListRequest::getIp() const {
  return ip_;
}

void DescribeSlaEventListRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long DescribeSlaEventListRequest::getEndTime() const {
  return endTime_;
}

void DescribeSlaEventListRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long DescribeSlaEventListRequest::getPage() const {
  return page_;
}

void DescribeSlaEventListRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string DescribeSlaEventListRequest::getRegion() const {
  return region_;
}

void DescribeSlaEventListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

