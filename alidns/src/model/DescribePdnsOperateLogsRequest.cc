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

#include <alibabacloud/alidns/model/DescribePdnsOperateLogsRequest.h>

using AlibabaCloud::Alidns::Model::DescribePdnsOperateLogsRequest;

DescribePdnsOperateLogsRequest::DescribePdnsOperateLogsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribePdnsOperateLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribePdnsOperateLogsRequest::~DescribePdnsOperateLogsRequest() {}

std::string DescribePdnsOperateLogsRequest::getActionType() const {
  return actionType_;
}

void DescribePdnsOperateLogsRequest::setActionType(const std::string &actionType) {
  actionType_ = actionType;
  setParameter(std::string("ActionType"), actionType);
}

std::string DescribePdnsOperateLogsRequest::getStartDate() const {
  return startDate_;
}

void DescribePdnsOperateLogsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribePdnsOperateLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePdnsOperateLogsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePdnsOperateLogsRequest::getEndDate() const {
  return endDate_;
}

void DescribePdnsOperateLogsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

long DescribePdnsOperateLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribePdnsOperateLogsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePdnsOperateLogsRequest::getLang() const {
  return lang_;
}

void DescribePdnsOperateLogsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribePdnsOperateLogsRequest::getKeyword() const {
  return keyword_;
}

void DescribePdnsOperateLogsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

