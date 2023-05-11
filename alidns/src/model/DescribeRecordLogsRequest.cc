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

#include <alibabacloud/alidns/model/DescribeRecordLogsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeRecordLogsRequest;

DescribeRecordLogsRequest::DescribeRecordLogsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeRecordLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecordLogsRequest::~DescribeRecordLogsRequest() {}

std::string DescribeRecordLogsRequest::getDomainName() const {
  return domainName_;
}

void DescribeRecordLogsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeRecordLogsRequest::getStartDate() const {
  return startDate_;
}

void DescribeRecordLogsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribeRecordLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRecordLogsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRecordLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRecordLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRecordLogsRequest::getEndDate() const {
  return endDate_;
}

void DescribeRecordLogsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("endDate"), endDate);
}

std::string DescribeRecordLogsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeRecordLogsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

long DescribeRecordLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRecordLogsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRecordLogsRequest::getLang() const {
  return lang_;
}

void DescribeRecordLogsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeRecordLogsRequest::getKeyWord() const {
  return keyWord_;
}

void DescribeRecordLogsRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

