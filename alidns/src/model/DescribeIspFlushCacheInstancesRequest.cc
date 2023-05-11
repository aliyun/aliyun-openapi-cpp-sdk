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

#include <alibabacloud/alidns/model/DescribeIspFlushCacheInstancesRequest.h>

using AlibabaCloud::Alidns::Model::DescribeIspFlushCacheInstancesRequest;

DescribeIspFlushCacheInstancesRequest::DescribeIspFlushCacheInstancesRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeIspFlushCacheInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIspFlushCacheInstancesRequest::~DescribeIspFlushCacheInstancesRequest() {}

std::string DescribeIspFlushCacheInstancesRequest::getIsp() const {
  return isp_;
}

void DescribeIspFlushCacheInstancesRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

std::string DescribeIspFlushCacheInstancesRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeIspFlushCacheInstancesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribeIspFlushCacheInstancesRequest::getType() const {
  return type_;
}

void DescribeIspFlushCacheInstancesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeIspFlushCacheInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeIspFlushCacheInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeIspFlushCacheInstancesRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeIspFlushCacheInstancesRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int DescribeIspFlushCacheInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeIspFlushCacheInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeIspFlushCacheInstancesRequest::getLang() const {
  return lang_;
}

void DescribeIspFlushCacheInstancesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeIspFlushCacheInstancesRequest::getKeyword() const {
  return keyword_;
}

void DescribeIspFlushCacheInstancesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeIspFlushCacheInstancesRequest::getDirection() const {
  return direction_;
}

void DescribeIspFlushCacheInstancesRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

