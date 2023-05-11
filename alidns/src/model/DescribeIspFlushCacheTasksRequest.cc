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

#include <alibabacloud/alidns/model/DescribeIspFlushCacheTasksRequest.h>

using AlibabaCloud::Alidns::Model::DescribeIspFlushCacheTasksRequest;

DescribeIspFlushCacheTasksRequest::DescribeIspFlushCacheTasksRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeIspFlushCacheTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIspFlushCacheTasksRequest::~DescribeIspFlushCacheTasksRequest() {}

std::string DescribeIspFlushCacheTasksRequest::getIsp() const {
  return isp_;
}

void DescribeIspFlushCacheTasksRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeIspFlushCacheTasksRequest::getDomainName() const {
  return domainName_;
}

void DescribeIspFlushCacheTasksRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeIspFlushCacheTasksRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeIspFlushCacheTasksRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int DescribeIspFlushCacheTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeIspFlushCacheTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeIspFlushCacheTasksRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeIspFlushCacheTasksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeIspFlushCacheTasksRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeIspFlushCacheTasksRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeIspFlushCacheTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeIspFlushCacheTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeIspFlushCacheTasksRequest::getLang() const {
  return lang_;
}

void DescribeIspFlushCacheTasksRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeIspFlushCacheTasksRequest::getDirection() const {
  return direction_;
}

void DescribeIspFlushCacheTasksRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

