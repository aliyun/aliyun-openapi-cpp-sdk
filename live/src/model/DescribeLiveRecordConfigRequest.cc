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

#include <alibabacloud/live/model/DescribeLiveRecordConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveRecordConfigRequest;

DescribeLiveRecordConfigRequest::DescribeLiveRecordConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveRecordConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveRecordConfigRequest::~DescribeLiveRecordConfigRequest() {}

int DescribeLiveRecordConfigRequest::getPageNum() const {
  return pageNum_;
}

void DescribeLiveRecordConfigRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeLiveRecordConfigRequest::getAppName() const {
  return appName_;
}

void DescribeLiveRecordConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveRecordConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeLiveRecordConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeLiveRecordConfigRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveRecordConfigRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveRecordConfigRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveRecordConfigRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveRecordConfigRequest::getOrder() const {
  return order_;
}

void DescribeLiveRecordConfigRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeLiveRecordConfigRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveRecordConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeLiveRecordConfigRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveRecordConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

