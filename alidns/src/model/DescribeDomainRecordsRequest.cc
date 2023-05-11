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

#include <alibabacloud/alidns/model/DescribeDomainRecordsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainRecordsRequest;

DescribeDomainRecordsRequest::DescribeDomainRecordsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainRecordsRequest::~DescribeDomainRecordsRequest() {}

std::string DescribeDomainRecordsRequest::getValueKeyWord() const {
  return valueKeyWord_;
}

void DescribeDomainRecordsRequest::setValueKeyWord(const std::string &valueKeyWord) {
  valueKeyWord_ = valueKeyWord;
  setParameter(std::string("ValueKeyWord"), valueKeyWord);
}

std::string DescribeDomainRecordsRequest::getLine() const {
  return line_;
}

void DescribeDomainRecordsRequest::setLine(const std::string &line) {
  line_ = line;
  setParameter(std::string("Line"), line);
}

std::string DescribeDomainRecordsRequest::getType() const {
  return type_;
}

void DescribeDomainRecordsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

long DescribeDomainRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainRecordsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long DescribeDomainRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainRecordsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDomainRecordsRequest::getLang() const {
  return lang_;
}

void DescribeDomainRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDomainRecordsRequest::getKeyWord() const {
  return keyWord_;
}

void DescribeDomainRecordsRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

std::string DescribeDomainRecordsRequest::getRRKeyWord() const {
  return rRKeyWord_;
}

void DescribeDomainRecordsRequest::setRRKeyWord(const std::string &rRKeyWord) {
  rRKeyWord_ = rRKeyWord;
  setParameter(std::string("RRKeyWord"), rRKeyWord);
}

std::string DescribeDomainRecordsRequest::getDirection() const {
  return direction_;
}

void DescribeDomainRecordsRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

long DescribeDomainRecordsRequest::getGroupId() const {
  return groupId_;
}

void DescribeDomainRecordsRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

std::string DescribeDomainRecordsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainRecordsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainRecordsRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeDomainRecordsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribeDomainRecordsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDomainRecordsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeDomainRecordsRequest::getSearchMode() const {
  return searchMode_;
}

void DescribeDomainRecordsRequest::setSearchMode(const std::string &searchMode) {
  searchMode_ = searchMode;
  setParameter(std::string("SearchMode"), searchMode);
}

std::string DescribeDomainRecordsRequest::getTypeKeyWord() const {
  return typeKeyWord_;
}

void DescribeDomainRecordsRequest::setTypeKeyWord(const std::string &typeKeyWord) {
  typeKeyWord_ = typeKeyWord;
  setParameter(std::string("TypeKeyWord"), typeKeyWord);
}

std::string DescribeDomainRecordsRequest::getStatus() const {
  return status_;
}

void DescribeDomainRecordsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

