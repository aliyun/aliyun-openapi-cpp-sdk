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

#include <alibabacloud/alidns/model/DescribeDnsProductInstancesRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDnsProductInstancesRequest;

DescribeDnsProductInstancesRequest::DescribeDnsProductInstancesRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDnsProductInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDnsProductInstancesRequest::~DescribeDnsProductInstancesRequest() {}

std::string DescribeDnsProductInstancesRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeDnsProductInstancesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long DescribeDnsProductInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDnsProductInstancesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDnsProductInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDnsProductInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDnsProductInstancesRequest::getDomainType() const {
  return domainType_;
}

void DescribeDnsProductInstancesRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

std::string DescribeDnsProductInstancesRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDnsProductInstancesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long DescribeDnsProductInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDnsProductInstancesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDnsProductInstancesRequest::getLang() const {
  return lang_;
}

void DescribeDnsProductInstancesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDnsProductInstancesRequest::getVersionCode() const {
  return versionCode_;
}

void DescribeDnsProductInstancesRequest::setVersionCode(const std::string &versionCode) {
  versionCode_ = versionCode;
  setParameter(std::string("VersionCode"), versionCode);
}

std::string DescribeDnsProductInstancesRequest::getDirection() const {
  return direction_;
}

void DescribeDnsProductInstancesRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

