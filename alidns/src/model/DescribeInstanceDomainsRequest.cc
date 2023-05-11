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

#include <alibabacloud/alidns/model/DescribeInstanceDomainsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeInstanceDomainsRequest;

DescribeInstanceDomainsRequest::DescribeInstanceDomainsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeInstanceDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceDomainsRequest::~DescribeInstanceDomainsRequest() {}

long DescribeInstanceDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceDomainsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstanceDomainsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceDomainsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceDomainsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeInstanceDomainsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long DescribeInstanceDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceDomainsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceDomainsRequest::getLang() const {
  return lang_;
}

void DescribeInstanceDomainsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

