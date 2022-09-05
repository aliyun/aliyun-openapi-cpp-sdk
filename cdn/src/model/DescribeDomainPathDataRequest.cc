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

#include <alibabacloud/cdn/model/DescribeDomainPathDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainPathDataRequest;

DescribeDomainPathDataRequest::DescribeDomainPathDataRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainPathData") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDomainPathDataRequest::~DescribeDomainPathDataRequest() {}

std::string DescribeDomainPathDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeDomainPathDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDomainPathDataRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainPathDataRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDomainPathDataRequest::getPath() const {
  return path_;
}

void DescribeDomainPathDataRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

int DescribeDomainPathDataRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainPathDataRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDomainPathDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainPathDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainPathDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeDomainPathDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDomainPathDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainPathDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

