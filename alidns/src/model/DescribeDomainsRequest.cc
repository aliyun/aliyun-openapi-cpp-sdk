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

#include <alibabacloud/alidns/model/DescribeDomainsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainsRequest;

DescribeDomainsRequest::DescribeDomainsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainsRequest::~DescribeDomainsRequest() {}

std::string DescribeDomainsRequest::getStartDate() const {
  return startDate_;
}

void DescribeDomainsRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

long DescribeDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDomainsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDomainsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

long DescribeDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDomainsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeDomainsRequest::Tag> DescribeDomainsRequest::getTag() const {
  return tag_;
}

void DescribeDomainsRequest::setTag(const std::vector<DescribeDomainsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDomainsRequest::getLang() const {
  return lang_;
}

void DescribeDomainsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDomainsRequest::getKeyWord() const {
  return keyWord_;
}

void DescribeDomainsRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

std::string DescribeDomainsRequest::getDirection() const {
  return direction_;
}

void DescribeDomainsRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

bool DescribeDomainsRequest::getStarmark() const {
  return starmark_;
}

void DescribeDomainsRequest::setStarmark(bool starmark) {
  starmark_ = starmark;
  setParameter(std::string("Starmark"), starmark ? "true" : "false");
}

std::string DescribeDomainsRequest::getGroupId() const {
  return groupId_;
}

void DescribeDomainsRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeDomainsRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeDomainsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string DescribeDomainsRequest::getEndDate() const {
  return endDate_;
}

void DescribeDomainsRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string DescribeDomainsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDomainsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeDomainsRequest::getSearchMode() const {
  return searchMode_;
}

void DescribeDomainsRequest::setSearchMode(const std::string &searchMode) {
  searchMode_ = searchMode;
  setParameter(std::string("SearchMode"), searchMode);
}

