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

#include <alibabacloud/domain/model/QueryChangeLogListRequest.h>

using AlibabaCloud::Domain::Model::QueryChangeLogListRequest;

QueryChangeLogListRequest::QueryChangeLogListRequest()
    : RpcServiceRequest("domain", "2018-01-29", "QueryChangeLogList") {
  setMethod(HttpRequest::Method::Post);
}

QueryChangeLogListRequest::~QueryChangeLogListRequest() {}

std::string QueryChangeLogListRequest::getDomainName() const {
  return domainName_;
}

void QueryChangeLogListRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int QueryChangeLogListRequest::getPageNum() const {
  return pageNum_;
}

void QueryChangeLogListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long QueryChangeLogListRequest::getStartDate() const {
  return startDate_;
}

void QueryChangeLogListRequest::setStartDate(long startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), std::to_string(startDate));
}

long QueryChangeLogListRequest::getEndDate() const {
  return endDate_;
}

void QueryChangeLogListRequest::setEndDate(long endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), std::to_string(endDate));
}

std::string QueryChangeLogListRequest::getUserClientIp() const {
  return userClientIp_;
}

void QueryChangeLogListRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int QueryChangeLogListRequest::getPageSize() const {
  return pageSize_;
}

void QueryChangeLogListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryChangeLogListRequest::getLang() const {
  return lang_;
}

void QueryChangeLogListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

