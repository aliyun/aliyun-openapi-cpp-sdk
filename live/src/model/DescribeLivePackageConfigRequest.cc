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

#include <alibabacloud/live/model/DescribeLivePackageConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLivePackageConfigRequest;

DescribeLivePackageConfigRequest::DescribeLivePackageConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLivePackageConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLivePackageConfigRequest::~DescribeLivePackageConfigRequest() {}

int DescribeLivePackageConfigRequest::getPageNum() const {
  return pageNum_;
}

void DescribeLivePackageConfigRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeLivePackageConfigRequest::getAppName() const {
  return appName_;
}

void DescribeLivePackageConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLivePackageConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeLivePackageConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLivePackageConfigRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLivePackageConfigRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLivePackageConfigRequest::getStreamName() const {
  return streamName_;
}

void DescribeLivePackageConfigRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLivePackageConfigRequest::getOrder() const {
  return order_;
}

void DescribeLivePackageConfigRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeLivePackageConfigRequest::getDomainName() const {
  return domainName_;
}

void DescribeLivePackageConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeLivePackageConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLivePackageConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

