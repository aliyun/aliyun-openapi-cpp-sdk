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

#include <alibabacloud/alidns/model/DescribeSubDomainRecordsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeSubDomainRecordsRequest;

DescribeSubDomainRecordsRequest::DescribeSubDomainRecordsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeSubDomainRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSubDomainRecordsRequest::~DescribeSubDomainRecordsRequest() {}

std::string DescribeSubDomainRecordsRequest::getLine() const {
  return line_;
}

void DescribeSubDomainRecordsRequest::setLine(const std::string &line) {
  line_ = line;
  setParameter(std::string("Line"), line);
}

std::string DescribeSubDomainRecordsRequest::getDomainName() const {
  return domainName_;
}

void DescribeSubDomainRecordsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeSubDomainRecordsRequest::getType() const {
  return type_;
}

void DescribeSubDomainRecordsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

long DescribeSubDomainRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSubDomainRecordsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSubDomainRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSubDomainRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSubDomainRecordsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeSubDomainRecordsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long DescribeSubDomainRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSubDomainRecordsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSubDomainRecordsRequest::getSubDomain() const {
  return subDomain_;
}

void DescribeSubDomainRecordsRequest::setSubDomain(const std::string &subDomain) {
  subDomain_ = subDomain;
  setParameter(std::string("SubDomain"), subDomain);
}

std::string DescribeSubDomainRecordsRequest::getLang() const {
  return lang_;
}

void DescribeSubDomainRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

